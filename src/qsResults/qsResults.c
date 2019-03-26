#include "qsResults.h"
#include "../qsErrors/qsErrors.h"
#include <string.h>
#include <stdio.h>

int qsResults(int res, double x1, double x2, char* line, int nline) {
    // Format output string based on input
    if(res == ROOT_0) {
        strncpy(line, "There are no real roots!", nline);
    }
    else if(res == ROOT_1) {
        snprintf(line, nline, "This is a single/double root: X1 = %.7e", x1);
    }
    else {
        snprintf(line, nline, "There are two real roots: X1 = %.7e and X2 = %.7e", x1, x2);
    }

    return OK;
}
