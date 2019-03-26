#include <stdio.h>
#include "qsSolve.h"

int main(int argc, char** argv) {
    double x1 = 0;
    double x2 = 0;
    double a  = 0;
    double b  = 0;
    double c  = 0;
    int ret;
    
    while(fscanf(stdin, "%lf %lf %lf\n", &a, &b, &c) == 3) {
        ret = qsSolve(a, b, c, &x1, &x2);
        printf("Ret = %d; X1 = %.7e; X2 = %.7e\n", ret, x1, x2);
    }
    
    return 0;
}
