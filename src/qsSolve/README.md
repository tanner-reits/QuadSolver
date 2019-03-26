This directory contains all necessary files for solving the quadratic equation and automated unit testing.

TESTING:
automated testing can be run using the 'make run-test' command
all test cases from the qsSolveIn.txt function are directed from stdin
output is directed to 'qsSolveOut.txt' and compared to 'tqsSolveOutReal.txt'

RETURN VALUES:
return flags are used to indicate success or error
    Success Constants:
        ROOT_0 = 0
        ROOT_1 = 1
        ROOT_2 = 2
    Error Constants:
        ARGS       = 3
        A_OUT      = 4
        B_OUT      = 5
        C_OUT      = 6
        FORMAT     = 7
        NULL_POINT = 8
        PRODUCT    = 9
        