CC = gcc -lm

CFLAGS = -O -Wall -pedantic

qsSolve: qsSolve.o

test:
	$(CC) qsSolve.c tqsSolve.c $(CFLAGS) -o test

qsSolve.o: qsSolve.h

tqsSolve.o: qsSolve.h
