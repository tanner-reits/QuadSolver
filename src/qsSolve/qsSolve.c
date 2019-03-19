#include <float.h>
#include <math.h>
#include <stdlib.h>
#include "qsSolve.h"

int qsSolve(double a, double b, double c, double* x1, double* x2) {
    // Validate input
    if((a < FLT_MIN) || (a > FLT_MAX)) {
        return 0;
    } 
    if((b < FLT_MIN) || (b > FLT_MAX)) {
        return 0;
    }
    if((c < FLT_MIN) || (c > FLT_MAX)) {
        return 0;
    } 
    if(x1 == NULL) {
        return 0;    
    }
    if(x2 == NULL) {
        return 0;
    }
    
    // Check if b^2 out of range
    double b2 = b * b;
    if((b2 > DBL_MAX) || (b2 < DBL_MIN)) {
        return 0;
    }
    
    // Check if 2c out of range
    if((2 * c > DBL_MAX) || (2 * c < DBL_MIN)) {
        return 0;
    }
    
    // Check if 2a out of range
    if((2 * a > DBL_MAX) || (2 * a < DBL_MIN)) {
        return 0;
    }
    
    // Check if 4ac out of range
    if((4 * a * c > DBL_MAX) || (4 * a * c < DBL_MIN)) {
        return 0;
    }
    
    // Check determinant
    double det = b2 - (4 * a * c);
    if(det < 0) {
        *x1 = NAN;
        *x2 = NAN;
        
        return 0;
    }
    else if(det == 0) {
        *x1 = -b / (2 * c);
        *x2 = NAN;
        
        return 1;
    }
    
    // Use quadratic equation
    if(b >= 0) {
        *x1 = (-b - sqrt(b2 - (4 * a * c))) / (2 * a));
        *x2 = ((2 * c) / (-b - sqrt(b2 - (4 * a * c))));
    }
    else if() {
        *x2 = (-b - sqrt(b2 - (4 * a * c))) / (2 * a));
        *x1 = ((2 * c) / (-b - sqrt(b2 - (4 * a * c))));
    }
    else {
        *x1 = ((-b + sqrt(b2 - (4 * a * c))) / (2 * a));
        *x2 = ((-b - sqrt(b2 - (4 * a * c))) / (2 * a));
    }
    
    return 2;
}
