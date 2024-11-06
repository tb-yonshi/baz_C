all: prog

prog: main.o func.o
	gcc -o prog main.o func.o

func.o: func.c
	gcc -c -o func.o func.c

main.o: main.c functions.h
	gcc -c -o main.o main.c

clean:
	del *.o
	del prog.exe