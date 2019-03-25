CC = gcc
CFLAGS = -O -Wall -pedantic

test: qsGetLine.o tqsGetLine.o
	$(CC) $(CFLAGS) tqsGetLine.o qsGetLine.o -o test

qsGetLine.o: qsGetLine.h

tqsGetLine.o: qsGetLine.h

run-test: test
	./test > tqsGetLineOut.txt
	diff tqsGetLineOut.txt tqsGetLineOutReal.txt

clean:
	rm -f *.o core test
