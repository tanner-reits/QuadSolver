#include "qsValidate.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <float.h>
#include <stdlib.h>


/* This funtion parses a string passed as a parameter into coefficients a, b, and c for the quadratic equation.
 * If any of the parsed strings has an illegal format (ie. contains characters, extra decimal points, etc.) The arguments variable is not incremented and the corresponding coefficient is set to 0.
 * 
 * If parsing is successful, the function then checks whether the coefficients fall within the range of a 32-bit float. Othwerwise, the number of arguments is returned and the function terminates early. 
 * If a is out of range, -1 is returned. If b is out of range, -2 is returned. If c is out or range -3 is returned. 
*/
int qsValidate(char* line, int nline, double* a, double* b, double* c) {
    // Initialize pointers
    *a = 0;
    *b = 0;
    *c = 0;
    
    // Variables for parsing
    char* err = NULL;
    char* tok = "";
    int args  = 0;
    char buf[nline + 1];
    
    strncpy(buf, line, nline);
    
    // Parse string into a, b, and c coefficients
    if((tok = strtok(buf, " ")) != NULL) {
        *a = strtod(tok, &err);
        if(*err == 0) {
            args++;
        }
        else {
            *a = 0;
        }
    }
    if((tok = strtok(NULL, " ")) != NULL) {
        *b = strtod(tok, &err);
        if(*err == 0) {
            args++;
        }
        else {
            *b = 0;
        }
    }
    if((tok = strtok(NULL, " ")) != NULL) {
        *c = strtod(tok, &err);
        if(*err == 0) {
            args++;
        }
        else {
            *c = 0;
        }
    }
    
    if(args < 3) {
        return args;
    }
    
    // Check input ranges
    if((*a < FLT_MIN) || (*a > FLT_MAX)) {
        return -1;
    } 
    if((*b < FLT_MIN) || (*b > FLT_MAX)) {
        return -2;
    }
    if((*c < FLT_MIN) || (*c > FLT_MAX)) {
        return -3;
    } 
    
    return args;
}
