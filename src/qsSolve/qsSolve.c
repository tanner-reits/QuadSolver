#include <float.h>
#include <math.h>
#include <stdlib.h>
#include "qsSolve.h"
#include "../qsErrors/qsErrors.h"

int qsSolve(double a, double b, double c, double* x1, double* x2) {
    *x1 = NAN;
    *x2 = NAN;
    
    // Validate input
    if(isnan(a) || isnan(b) || isnan(c)) {
        return FORMAT;
    }
    if(fabs(a) > FLT_MAX) {
        return A_OUT;
    } 
    if(fabs(b) > FLT_MAX) {
        return B_OUT;
    }
    if(fabs(c) > FLT_MAX) {
        return C_OUT;
    } 
    if(x1 == NULL) {
        return NULL_POINT;    
    }
    if(x2 == NULL) {
        return NULL_POINT;
    }
    
    // Check if b^2 out of range
    double b2 = b * b;
    if((b2 > DBL_MAX) || (b2 < -DBL_MAX)) {
	//printf("b^2\n");
        return PRODUCT;
    }
    
    // Check if 2c out of range
    if((2 * c > DBL_MAX) || (fabs(2 * c) > DBL_MAX)) {
	//printf("2c\n");
        return PRODUCT;
    }
    
    // Check if 2a out of range
    if((2 * a > DBL_MAX) || (fabs(2 * a) > DBL_MAX)) {
	//printf("2a\n");
        return PRODUCT;
    }
    
    // Check if 4ac out of range
    if((4 * a * c > DBL_MAX) || (fabs(4 * a * c) > DBL_MAX)) {
	//printf("4ac\n");
        return PRODUCT;
    }
    
    // Check determinant
    double det = b2 - (4 * a * c);
    if(det < 0) {
        return ROOT_0;
    }
    else if(det == 0) {
        *x1 = -b / (2 * a);
        
        return ROOT_1;
    }
    
    // Use quadratic equation
    if(b >= 0) {
        *x1 = (-b - sqrt(b2 - (4 * a * c))) / (2 * a);
        *x2 = ((2 * c) / (-b - sqrt(b2 - (4 * a * c))));
    }
    else {
        *x2 = (-b - sqrt(b2 - (4 * a * c))) / (2 * a);
        *x1 = ((2 * c) / (-b - sqrt(b2 - (4 * a * c))));
    }
    
    // Switch if in wrong order
    if(*x1 > *x2) {
        double temp = *x1;
        *x1         = *x2;
        *x2         = temp;
    }
    
    return ROOT_2;
}
