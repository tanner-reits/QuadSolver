CC = gcc -lm
CFLAGS = -O -Wall -pedantic

qsSolve: qsSolve.c

test:
	$(CC) qsSolve.c tqsSolve.c $(CFLAGS) -o test
	./test > tqsSolveOut.txt
	diff tqsSolveOut.txt tqsSolveOutReal.txt

qsSolve.c: qsSolve.h

tqsSolve.c: qsSolve.h

clean:
	rm -f *.o core test
