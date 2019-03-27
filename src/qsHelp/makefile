CC = gcc
CFLAGS = -O -Wall -pedantic

test: tqsHelp.o qsHelp.o
	$(CC) $(CFLAGS) tqsHelp.o qsHelp.o -o test

tqsHelp.o: qsHelp.h

qsHelp.o: qsHelp.h

run: test
	./test

clean:
	rm -f *.o core test
