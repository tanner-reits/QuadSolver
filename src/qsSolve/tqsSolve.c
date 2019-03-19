#include <stdio.h>
#include "qsSolve.h"

int main(int argc, char** argv) {
    int ret;
    double x1;
    double x2;
    
    ret = qsSolve(5.4e+35, 2.1e+10, 3.5e+12, &x1, &x2);
    printf("%d\n", ret);
}
