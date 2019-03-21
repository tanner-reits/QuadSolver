#include "qsValidate.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int qsValidate(char* line, int nline, double* a, double* b, double* c) {
    // Parse line
    char* err;
    char* tok;
    char buf[nline + 1];
    int args = 0;
    
    strncpy(buf, line, nline);
    
    if((tok = strtok(buf, " ")) != NULL) {
        *a = strtod(tok, &err);
        if(*err == 0) {
            args++;
        }
    }
    
    if((tok = strtok(NULL, " ")) != NULL) {
        *b = strtod(tok, &err);
        if(*err == 0) {
            args++;
        }
    }
    
    if((tok = strtok(NULL, " ")) != NULL) {
        *c = strtod(tok, &err);
        if(*err == 0) {
            args++;
        }
    }
    
    if(args != 3) {
        printf("TOO FEW ARGS\n");
        return 0;       // Not enough arguments given
    }
    
    printf("%lf %lf %lf\n", *a, *b, *c);
    
    // Check inputs
    // Ranges
    
    return 1;
}
