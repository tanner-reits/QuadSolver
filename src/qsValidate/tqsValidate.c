#include "qsValidate.h"
#include <string.h>
#include <stdio.h>

int main(int argc, char** argv) {
    int ret;
    double a;
    double b;
    double c;
    char buf[100];
    
    while(fgets(buf, 100, stdin) != NULL) {
        buf[strnlen(buf, 100) - 1] = '\0';
        ret = qsValidate(buf, strnlen(buf, 100), &a, &b, &c);
        printf("Ret = %d; A = %.7e; B = %.7e; C = %.7e\n", ret, a, b, c);
    }
    
    return 0;
}
