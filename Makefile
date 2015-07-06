CC=g++
CFLAGS=-c

all: primes

primes: prime.o main.o
	$(CC) prime.o main.o

test: prime.o tests/primes.o
	$(CC) prime.o tests/primes.o

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

prime.o: prime.cpp
	$(CC) $(CFLAGS) prime.cpp

tests/primes.o: tests/primes.cpp
	$(CC) $(CFLAGS) tests/primes.cpp -o tests/primes.o

clean:
	rm *.o a.out
