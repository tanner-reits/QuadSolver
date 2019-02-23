#include <math.h>
#include <stdio.h>

int main(int argc, char** argv) {
    double inf = INFINITY;
    double neg = -INFINITY;
    double nan = NAN;
    double d   = 5.3;
    
    if(isinf(inf)) {
        printf("Infinity\n");
    }
    
    if(neg == -INFINITY) {
        printf("Negative Infinity\n");
    }
    
    double result = d / inf;
    printf("%lf / %lf = %lf\n", d, inf, result);
    
    result = d / neg;
    printf("%lf / %lf = %lf\n", d, neg, result);
    
    result = d / 0;
    printf("%lf / %lf = %lf\n", d, 0.0, result);
    
    result = -d / 0;
    printf("%lf / %lf = %lf\n", -d, 0.0, result);
    
    result = inf * inf;
    printf("%lf * %lf = %lf\n", inf, inf, result);
    
    result = inf * neg;
    printf("%lf * %lf = %lf\n", inf, neg, result);
    
    result = neg * neg;
    printf("%lf * %lf = %lf\n", neg, neg, result);
    
    result = inf * 0;
    printf("%lf * %lf = %lf\n", inf, 0.0, result);
    
    result = neg * 0;
    printf("%lf * %lf = %lf\n", neg, 0.0, result);
    
    result = inf / inf;
    printf("%lf / %lf = %lf\n", inf, inf, result);
    
    result = neg / inf;
    printf("%lf / %lf = %lf\n", neg, inf, result);
    
    result = inf / neg;
    printf("%lf / %lf = %lf\n", inf, neg, result);
    
    result = neg / neg;
    printf("%lf / %lf = %lf\n", neg, neg, result);
    
    result = sqrt(inf);
    printf("sqrt(%lf) = %lf\n", inf, result);
    
    result = sqrt(neg);
    printf("sqrt(%lf) = %lf\n", neg, result);
    
    result = sqrt(nan);
    printf("sqrt(%lf) = %lf\n", nan, result);
    
    return 0;
}
