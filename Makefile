CC=g++
CFLAGS=-c

all: primes

primes: prime.o main.o
	$(CC) prime.o main.o

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

prime.o: prime.cpp
	$(CC) $(CFLAGS) prime.cpp

clean:
	rm *.o a.out
