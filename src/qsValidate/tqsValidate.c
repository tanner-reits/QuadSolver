#include "qsValidate.h"
#include <string.h>

int main(int argc, char** argv) {
    int ret;
    double a;
    double b;
    double c;
    char buf[100];
    
    strcpy(buf, "4.3 4.4 643.2");
    ret = qsValidate(buf, strlen(buf), &a, &b, &c);
    printf("%d %e %e %e\n", ret, a, b, c);
    
    strcpy(buf, "4.3 4.2 643.232");
    ret = qsValidate(buf, strlen(buf), &a, &b, &c);
    printf("%d %e %e %e\n", ret, a, b, c);
    
    strcpy(buf, "4.3 4.4");
    ret = qsValidate(buf, strlen(buf), &a, &b, &c);
    printf("%d %e %e %e\n", ret, a, b, c);
    
    strcpy(buf, "4.3 5434.234gdf 4.4");
    ret = qsValidate(buf, strlen(buf), &a, &b, &c);
    printf("%d %e %e %e\n", ret, a, b, c);
    
    strcpy(buf, "4.3e+10 4.4e-02 3.3e-05");
    ret = qsValidate(buf, strlen(buf), &a, &b, &c);
    printf("%d %e %e %e\n", ret, a, b, c);
    
    strcpy(buf, "4.3e+1 4.4e-2 3.3e-5");
    ret = qsValidate(buf, strlen(buf), &a, &b, &c);
    printf("%d %e %e %e\n", ret, a, b, c);
    
    strcpy(buf, "4.3.33 4.4 3.3");
    ret = qsValidate(buf, strlen(buf), &a, &b, &c);
    printf("%d %e %e %e\n", ret, a, b, c);
    
    strcpy(buf, "god4.3 4.3 4642.4");
    ret = qsValidate(buf, strlen(buf), &a, &b, &c);
    printf("%d %e %e %e\n", ret, a, b, c);
    
    strcpy(buf, "4.df3 4.3 4642.4");
    ret = qsValidate(buf, strlen(buf), &a, &b, &c);
    printf("%d %e %e %e\n", ret, a, b, c);
    
    strcpy(buf, "4.sdfd.3 4.3 4642.4");
    ret = qsValidate(buf, strlen(buf), &a, &b, &c);
    printf("%d %e %e %e\n", ret, a, b, c);
    
    return 0;
}
