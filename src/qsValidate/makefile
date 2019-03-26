CC = gcc
CFLAGS = -O -Wall -pedantic

test: tqsValidate.o qsValidate.o
	$(CC) $(CLFAGS) tqsValidate.o qsValidate.o -o test

tqsValidate.o: qsValidate.h

qsValidate.o: qsValidate.h

run-test: test
	./test < tqsValidateIn.txt > tqsValidateOut.txt
	diff tqsValidateOut.txt tqsValidateOutReal.txt

clean:
	rm -f *.o core test
