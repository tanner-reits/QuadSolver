CC = gcc
CFLAGS = -O -Wall -pedantic

test:
	$(CC) $(CFLAGS) tqsValidate.c qsValidate.c -o test

tqsValidate.c: qsValidate.h

qsValidate.c: qsValidate.h

clean:
	rm -f core test
