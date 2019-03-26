#include "qsValidate.h"
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>
#include <stdio.h>
#include "../qsErrors/qsErrors.h"


/* This funtion parses a string passed as a parameter into coefficients a, b, and c for the quadratic equation.
 * If any of the parsed strings has an illegal format (ie. contains characters, extra decimal points, etc.) The arguments variable is not incremented and the corresponding coefficient is set to 0.
 * 
 * If parsing is successful, the function then checks whether the coefficients fall within the range of a 32-bit float. Othwerwise, the number of arguments is returned and the function terminates early. 
 * If a is out of range, -1 is returned. If b is out of range, -2 is returned. If c is out or range -3 is returned. 
*/
int qsValidate(char* line, int nline, double* a, double* b, double* c) {
    // Initialize pointers
    *a = NAN;
    *b = NAN;
    *c = NAN;
    
    // Variables for parsing
    char* err  = NULL;
    char* tok  = NULL;
    int args   = 0;
    int format = 0;
    char buf[nline + 1];
    
    strncpy(buf, line, nline);
    
    // Parse string into a, b, and c coefficients
    if((tok = strtok(buf, " ")) != NULL) {
        *a = strtod(tok, &err);
        if(*err == 0) {
            args++;
        }
        else {
            *a     = NAN;
            format = 1;
        }
    }
    if((tok = strtok(NULL, " ")) != NULL) {
        *b = strtod(tok, &err);
        if(*err == 0) {
            args++;
        }
        else {
            *b     = NAN;
            format = 1;
        }
    }
    if((tok = strtok(NULL, " ")) != NULL) {
        *c = strtod(tok, &err);
        if(*err == 0 || *err == '\0') {
            args++;
        }
        else {
            *c     = NAN;
            format = 1;
        }
    }
    
    // If formatting flag set or too few args, return corresponding error
    if(args < 3 || format) {
        return FORMAT;
    }
    
    // Check input ranges
    if(fabs(*a) > FLT_MAX) {
        *a = NAN;
        return A_OUT;
    } 
    if(fabs(*b) > FLT_MAX) {
        *b = NAN;
        return B_OUT;
    }
    if(fabs(*c) > FLT_MAX) {
        *c = NAN;
        return C_OUT;
    } 
    
    return OK;
}
