CC = gcc 
CFLAGS = -O -Wall -pedantic

test: tqsSolve.o qsSolve.o
	$(CC) $(CFLAGS) qsSolve.o tqsSolve.o -o test

qsSolve.o: qsSolve.h

tqsSolve.o: qsSolve.h

run-test: test
	./test < tqsSolveIn.txt > tqsSolveOut.txt
	diff tqsSolveOut.txt tqsSolveOutReal.txt

clean:
	rm -f *.o core test
