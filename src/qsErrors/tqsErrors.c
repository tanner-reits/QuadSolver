#include "qsErrors.h"
#include <stdio.h>

int main(int argc, char** argv) {
    char line[256];
    int nline = 256;
    int err;
    
    err = qsErrors(ARGS, line, nline);
    printf("%d %s\n", err, line);
    
    err = qsErrors(A_OUT, line, nline);
    printf("%d %s\n", err, line);
    
    err = qsErrors(B_OUT, line, nline);
    printf("%d %s\n", err, line);
    
    err = qsErrors(C_OUT, line, nline);
    printf("%d %s\n", err, line);
    
    err = qsErrors(FORMAT, line, nline);
    printf("%d %s\n", err, line);
    
    err = qsErrors(NULL_POINT, line, nline);
    printf("%d %s\n", err, line);
    
    err = qsErrors(PRODUCT, line, nline);
    printf("%d %s\n", err, line);
    
    return OK;
}
