This directory contains the function responsible for validating input entered for the quad solver.

TESTING:
run 'make run-test' to compile and execute all automated unit tests for this function
Input is directed to stdio from the tqsValidateIn.txt file
Output is directed from stdout to the tqsValidateOut.txt file
Output is then compared to tqsValidateOutReal.txt file using the diff command

RETURN CONSTANTS:
constants are returned from the function to indicate success or failure
    OK     = 1
    ARGS   = 3
    A_OUT  = 4
    B_OUT  = 5
    C_OUT  = 6
    FORMAT = 7
