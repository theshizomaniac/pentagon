
prog: MN.o queue.o sort.o
	gcc -o prog MN.o queue.o sort.o

MN.o: MN.c
	gcc -std=c99 -c MN.c

queue.o: queue.c queue.h
	gcc -std=c99 -c queue.c 

sort.o : sort.c sort.h
	gcc -std=c99 -c sort.c



