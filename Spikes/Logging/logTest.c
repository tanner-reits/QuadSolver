/*
Command Line Quadratic Solver Project
Spike: Logging
TEAM: Steven Hawes, Tanner Reits, Audre Staffen, Edgar Cardenas
*/
#include <stdio.h>
int logInput(char *message);

int main(void) {
  logInput("Log Test Input");
  return 0;
}

int logInput(char *message) {
  FILE *logInput;
  if ((logInput = fopen("log.txt", "a")) == NULL) {
    return -1;
  }
  fprintf(logInput, "%s\n", message);
  fclose(logInput);
  return 0;
}
