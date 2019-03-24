#include "qsLog.h"

int qsLog(char *line) {

    File *logFile;

    // Will check for the file and append to it.
    // If file is not available it will create a new file.
    fd = fopen("/qsLog/logFile.txt", "a");

    // Prints the char array
    fprintf(fd, "%s\n", line);

    //Closes the file
    fclose(fd);
}
