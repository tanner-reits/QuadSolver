#include "qsValidate.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <float.h>
#include <stdlib.h>

int qsValidate(char* line, int nline, double* a, double* b, double* c) {
    // Initialize pointers
    *a = 0;
    *b = 0;
    *c = 0;
    
    // Parse line
    char* err = NULL;
    char* tok = "";
    int args  = 0;
    char buf[nline + 1];
    
    strncpy(buf, line, nline);
    
    if((tok = strtok(buf, " ")) != NULL) {
        *a = strtod(tok, &err);
        if(*err == 0) {
            args++;
        }
//        *a = atof(tok);
    }
    if((tok = strtok(NULL, " ")) != NULL) {
        *b = strtod(tok, &err);
        if(*err == 0) {
            args++;
        }
//        *b = atof(tok);
    }
    if((tok = strtok(NULL, " ")) != NULL) {
        *c = strtod(tok, &err);
        if(*err == 0) {
            args++;
        }
//        *c = atof(tok);
    }
    
    if(args != 3) {
        return 0;   // Not enough arguments given
    }
    
    // Check inputs
    // Ranges
    if((*a < FLT_MIN) || (*a > FLT_MAX)) {
        return 0;
    } 
    if((*b < FLT_MIN) || (*b > FLT_MAX)) {
        return 0;
    }
    if((*c < FLT_MIN) || (*c > FLT_MAX)) {
        return 0;
    } 
    
    return 1;
}
