#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../qsValidate/qsValidate.h"
#include "../qsSolve/qsSolve.h"
#include "../qsErrors/qsErrors.h"
#include "../qsGetLine/qsGetLine.h"
#include "../qsPutLine/qsPutLine.h"
#include "../qsResults/qsResults.h"
#include "../qsHelp/qsHelp.h"

//***********************************************
//Function to check if logging is enabled at each instance logging would be appropriate
void logCheck(int, char *line);

//***********************************************

int main(int argc, char** argv) {
    // Variables for functions
    int ret;
    int log = 0;
    char line[256];
    int nline = 256;
    int exit  = 0;
    double a  = 0;
    double b  = 0;
    double c  = 0;
    double x1 = 0;
    double x2 = 0;

    // Check if logging enable parameter passed as command line argument
    if((argc > 1) && (atoi(argv[1]) == 1)) {
        log  = qsLogEnable();
        logCheck(log, "Logging has been enabled\0");
    }

    // Print program information header
    printf("JKK Engineers Quadratic Solver:\n");
    printf("  Version: 0.1.1\n");
    printf("  For Help type \"help\"\n");
    printf("  To exit, type \"exit\"\n\n");

    do {
        // Get input line
        if((ret = qsGetline(line, nline)) != OK) {
            qsErrors(ret, line, nline);
            logCheck(log, "Error in user input\0");
            logCheck(log, line);
        }
        logCheck(log, "Input has passed validation. Input: \0");
        logCheck(log, line);

        // Check if user prompted for help
        if(strncmp(line, "help", nline) == 0) {
            qsHelp();
            logCheck(log, "User asked for help\0");
        }
        else if(strncmp(line, "exit", nline) == 0) {
            exit = 1;
            logCheck(log, "User has exited program\0");
        }
        else {
            // Validate input
            if(ret == OK) {
                if((ret = qsValidate(line, nline, &a, &b, &c)) != OK) {
                    qsErrors(ret, line, nline);
                    logCheck(log, "Error in coefficients passed. Input:\0");
                    logCheck(log, line);
                }
                logCheck(log, "Coefficients passed validation. Input:\0");
                logCheck(log, line);
            }
            
            // Apply quad solver
            if(ret == OK) {
                if((ret = qsSolve(a, b, c, &x1, &x2)) > ROOT_2) {
                    qsErrors(ret, line, nline);
                }
            }

            // Check results
            if(ret <= ROOT_2) {
                if((ret = qsResults(ret, x1, x2, line, nline)) != OK) {
                    qsErrors(ret, line, nline);
                }
            }

            // Output results
            qsPutline(line, strnlen(line, nline));
        }
    } while(!exit);
    
    logCheck(log, "Program ran succesfully\0");

    return OK;
}


//***********************************************                     
void logCheck(int log, char *line){
    if(log == OK){
        qsLog(line);
    }
}
               
