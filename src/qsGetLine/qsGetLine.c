#include "qsGetLine.h"

int qsGetline(char* line, int nline) {
    printf("Please input the values A, B, and C seperated by spaces\n");
    printf("input A B C : <A> <B> <C>\n");

    char *a;
    char *b;
    char *c;
    int ret;

    char temp[nline];
    fgets(temp, nline - 1, stdin);
    if((ret = sscanf(temp, "%s %s %s", &a, &b, &c)) != 3) {
        if (ret <= 2) {
            printf("Input has less than the required input values (Required: 3)");
            return ARGS;
        }
        return 0;
    }

    return 1;
}
