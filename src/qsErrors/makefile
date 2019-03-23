CC = gcc
CFLAGS = -O -Wall -pedantic

test: tqsErrors.o qsErrors.o
	$(CC) $(CFLAGS) tqsErrors.c qsErrors.c -o test

tqsErrors.o: qsErrors.h

qsErrors.o: qsErrors.h

run-test: test
	./test > tqsErrorsOut.txt
	diff tqsErrorsOut.txt tqsErrorsOutReal.txt

clean:
	rm -f *.o core test
