#include "qsErrors.h"
#include <string.h>

int qsErrors(int error, char* line, int len) {
    // Format error message based on error number
    switch(error) {
        case ARGS:
            strncpy(line, "The qSolve program was provided too few arguments\n", len);
            break;
        case A_OUT:
            strncpy(line, "The value for coefficient (A) is out of the 32-bit float range\n", len);
            break;
        case B_OUT:
            strncpy(line, "The value for coefficient (B) is out of the 32-bit float range\n", len);
            break;
        case C_OUT:
            strncpy(line, "The value for coefficient (C) is out of the 32-bit float range\n", len);
            break;
        case FORMAT:
            strncpy(line, "One or more of the coefficients entered has a format violation\n", len);
            break;
        case NULL_POINT:
            strncpy(line, "The address of X1 or X2 point to a NULL address\n", len);
            break;
        case PRODUCT:
            strncpy(line, "The product of entered coefficients is out of bounds of a 64-bit double\n", len);
            break;
        case X1_OUTD:
            strncpy(line, "The value for X1 is not within the bounds of a 64-bit double\n", len);
            break;
        case X2_OUTD:
            strncpy(line, "The value for X2 is not within the bounds of a 64-bit double\n", len);
            break;
    }

    return error;
}
