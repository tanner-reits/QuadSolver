#include "qsGetLine.h"

int qsGetline(char* line, int nline) {
    printf("Please input the values A, B, and C seperated by spaces\n");
    printf("input A B C : <A> <B> <C>\n");
    
    double a;
    double b;
    double c;
    int ret;

    char temp[nline];
    fgets(temp, nline - 1, stdin);
    if((ret = sscanf(temp, "%lf %lf %lf", &a, &b, &c)) != 3) {
        printf("Bad Input (Please update this to reasons why its bad)");
        return 0;
    }

    return 1;
}
