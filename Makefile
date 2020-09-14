CC     = gcc
CFLAGS = -Wall

all:
	make demo

demo: demo.o
	$(CC) -o demo demo.o Queue.o

demo.o: demo.c Queue.o
	$(CC) -c $(CFLAGS) demo.c

Queue.o: Queue.c Queue.h
	$(CC) -c $(CFLAGS) Queue.c


.PHONY: clean
clean:
	/bin/rm -f Queue.o demo.o demo