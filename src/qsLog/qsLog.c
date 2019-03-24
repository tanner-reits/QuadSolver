#include "qsLog.h"

int qsLog(char *line) {
    File *logFile;
    fd = fopen("/qsLog/logFile.txt", "a");
    fprintf(fp, line);
    fclose(fd);
}
