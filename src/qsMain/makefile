CC = gcc
CFLAGS = -O -Wall -pedantic

test: qsMain.o ../qsGetLine/qsGetLine.o ../qsSolve/qsSolve.o ../qsValidate/qsValidate.o ../qsErrors/qsErrors.o ../qsPutLine/qsPutLine.o ../qsResults/qsResults.o ../qsLogEnable/qsLogEnable.o ../qsLog/qsLog.o ../qsHelp/qsHelp.o
	$(CC) $(CFLAGS) qsMain.o ../qsGetLine/qsGetLine.o ../qsSolve/qsSolve.o ../qsValidate/qsValidate.o ../qsErrors/qsErrors.o ../qsPutLine/qsPutLine.o ../qsResults/qsResults.o ../qsLogEnable/qsLogEnable.o ../qsLog/qsLog.o ../qsHelp/qsHelp.o -o test

run-test: test
	./test < qsMainIn.txt > qsMainOut.txt
	diff qsMainOut.txt qsMainOutReal.txt

clean:
	rm -f *.o core test
