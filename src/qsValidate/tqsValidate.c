#include "qsValidate.h"
#include <string.h>

int main(int argc, char** argv) {
    double a;
    double b;
    double c;
    
    char* str = "4.3 gr 643.2";
    qsValidate(str, strlen(str), &a, &b, &c);
    
    str = "4.3 4.4 643.2";
    qsValidate(str, strlen(str), &a, &b, &c);
    
    str = "4.3 4.4";
    qsValidate(str, strlen(str), &a, &b, &c);
    
    return 0;
}
