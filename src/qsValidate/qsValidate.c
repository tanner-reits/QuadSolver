#include "qsValidate.h"
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>
#include <stdio.h>
#include "../qsErrors/qsErrors.h"


/* 
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
        if(*err == 0 && !isnan(*a)) {
            args++;
        }
        else {
            *a     = NAN;
            format = 1;
        }
    }
    if((tok = strtok(NULL, " ")) != NULL) {
        *b = strtod(tok, &err);
        if(*err == 0 && !isnan(*b)) {
            args++;
        }
        else {
            *b     = NAN;
            format = 1;
        }
    }
    if((tok = strtok(NULL, " ")) != NULL) {
        *c = strtod(tok, &err);
        if(*err == 0 && !isnan(*c)) {
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
