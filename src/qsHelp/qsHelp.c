#include "qsHelp.h"
#include <stdio.h>

int qsHelp() {
    printf("*******************************************************************************\n");
    printf("Welcome to the Quad Solver Help Menu!\n");
    
    // Explanation
    printf("ABOUT:\n");
    printf("\tThis Quad Solver program retrieves input values of A, B, and C from the user.\n");
    printf("\tThese coefficients are then used to calculate the real roots of a quadratic formula.\n");
    
    // Input
    printf("INPUT:\n");
    printf("\tAll input values must be within the range of a 32-bit single precision float\n");
    
    // Examples of input format and output
    printf("EXAMPLE INPUT AND OUTPUT:\n");
    printf("\t1 3 2\n\tReturns: x1 = -2, x2 = -1\n\n");
    printf("\t10 20 0\n\tReturns: x1 = -2, x2 = 0\n\n");
    printf("\t1 2 1\n\tReturns: x1 = -1\n");
    
    // Logging
    printf("LOGGING:\n");
    printf("\tType 'log' to toggle logging on and off\n");
        
    // Exiting
    printf("TO EXIT:\n");
    printf("\tType 'exit' to quit the program\n");
    
    printf("*******************************************************************************\n\n");
    
    return 1;
}
