CC = gcc
CFLAGS = -O -Wall -pedantic

test: qsMain.o
	$(CC) $(CFLAGS) qsMain.o -o test

make-test: test
	./test > qsMainOut.txt
	diff qsMainOut.txt qsMainOutReal.txt

clean:
	rm -f *.o core test
