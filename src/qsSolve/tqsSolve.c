#include <stdio.h>
#include "qsSolve.h"

int main(int argc, char** argv) {
    int ret;
    double x1 = 0;
    double x2 = 0;
    
    ret = qsSolve(21, 34, 6.32, &x1, &x2);
    printf("%d %.7e %.7e\n", ret, x1, x2);
    
    ret = qsSolve(3.23e+11, 1.123e+4, 4.4e-5, &x1, &x2);
    printf("%d %.7e %.7e\n", ret, x1, x2);
    
    ret = qsSolve(0, 5, 23.3, &x1, &x2);
    printf("%d %.7e %.7e\n", ret, x1, x2);
    
    ret = qsSolve(1.4e+9, 3.3e-10, 4.124e+3, &x1, &x2);
    printf("%d %.7e %.7e\n", ret, x1, x2);
    
    ret = qsSolve(1, 2, 1, &x1, &x2);
    printf("%d %.7e %.7e\n", ret, x1, x2);
}
