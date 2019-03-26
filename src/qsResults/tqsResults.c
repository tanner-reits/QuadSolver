#include "qsResults.h"
#include "../qsErrors/qsErrors.h"
#include <stdio.h>

int main(int argc, char** argv) {
    int res;
    double x1;
    double x2;
    char line[100];
    int nline = 100;
    
    while(fscanf(stdin, "%d %lf %lf\n", &res, &x1, &x2) == 3) {
        int ret = qsResults(res, x1, x2, line, nline);
        printf("RET = %d; %s\n", ret, line);
    }
    
    return OK;
}
