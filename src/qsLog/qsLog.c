#include "qsLog.h"
#include <stdio.h>

int qsLog(char *line) {

    FILE* logFile;

    // Will check for the file and append to it.
    // If file is not available it will create a new file.
    logFile = fopen("../qsLog/logFile.txt", "a");

    // Prints the char array
    fprintf(logFile, "%s\n", line);

    //Closes the file
    fclose(logFile);
}
