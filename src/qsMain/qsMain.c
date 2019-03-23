#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    // Variables for functions
    int ret;
    char line[256];
    char error[256];
    int nline = 256;
    double a  = 0;
    double b  = 0;
    double c  = 0;
    double x1 = 0;
    double x2 = 0;
    
    // Check if logging enable parameter passed as command line argument
    if((argc > 1) && (atoi(argv[1]) == 1)) {
        qsLogEnable();
    }
    
    // Get input line
    if((ret = qsGetLine(line, nline)) != OK) {
        qsErrors(ret);
        return ret;
    }
    
    // Validate input
    if((ret = qsValidate(line, nline, &a, &b, &c)) != OK) {
        qsErrors(ret);
        return ret;
    }
    
    // Apply quad solver
    if((ret = qsSolve(a, b, c, &x1, &x2)) != OK) {
        qsErrors(ret);
        return ret;
    }
    
    // Check results or errors
    if((ret = qsResults()) != OK) {
        qsErrors(ret);
        return ret;
    }
    
    // Output results
    if((ret = qsPutLine(line, strnlen(line, nline))) != OK) {
        qsErrors(ret);
        return ret;
    }
    
    return OK;
    
}