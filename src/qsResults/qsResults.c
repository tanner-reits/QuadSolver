#include "qsResults.h"
#include "../qsErrors/qsErrors.h"
#include <string.h>
#include <stdio.h>
#include <float.h>
#include <math.h>

int qsResults(int res, double x1, double x2, char* line, int nline) {    
    // Format output string based on input
    if(res == ROOT_0) {
        strncpy(line, "There are no real roots!\n", nline);
    }
    else if(res == ROOT_1) {
        if(fabs(x1) <= DBL_MAX) {
            snprintf(line, nline, "This is a single/double root: X1 = %.7e\n", x1);
        }
        else {
            return X1_OUTD;
        }
    }
    else {
        if(fabs(x1) <= DBL_MAX && fabs(x2) <= DBL_MAX) {
            snprintf(line, nline, "There are two real roots: X1 = %.7e and X2 = %.7e\n", x1, x2);
        }
        else if(fabs(x1) > DBL_MAX) {
            return X1_OUTD;
        }
        else {
            return X2_OUTD;
        }
    }

    return OK;
}
