#include <stdio.h>
#include <float.h>

int main(int argc, char** argv) {
    printf("FLOAT MIN: %e\n", FLT_MIN);
    printf("FLOAT MAX: %e\n\n", FLT_MAX);
    
    double test1 = 5.4e+38;
    double test2 = 3.4e-15;
    double test3 = -2;
    
    if((test1 < FLT_MIN) || (test1 > FLT_MAX)) {
        printf("Test1 out of range\n");
    }
    else {
        printf("Test1 in range\n");
    }
    
    if((test2 < FLT_MIN) || (test2 > FLT_MAX)) {
        printf("Test2 out of range\n");
    }
    else {
        printf("Test2 in range\n");
    }
    
    if((test2 < FLT_MIN) || (test2 > FLT_MAX)) {
        printf("Test3 out of range\n");
    }
    else {
        printf("Test3 in range\n");
    }
    
    test1 *= test1;
    test2 *= test2;
    test3 += test3;
    printf("\nAFTER SQUARING\n");
    if((test1 < FLT_MIN) || (test1 > FLT_MAX)) {
        printf("Test1 out of range\n");
    }
    else {
        printf("Test1 in range\n");
    }
    
    if((test2 < FLT_MIN) || (test2 > FLT_MAX)) {
        printf("Test2 out of range\n");
    }
    else {
        printf("Test2 in range\n");
    }
    
    if((test3 < FLT_MIN) || (test3 > FLT_MAX)) {
        printf("Test3 out of range\n");
    }
    else {
        printf("Test3 in range\n");
    }
}

