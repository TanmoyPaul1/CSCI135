main: main.o time.o 
	g++ -o main main.o time.o 

tests: tests.o time.o 
	g++ -o tests tests.o time.o

time.o: time.cpp 

main.o: main.cpp 

tests.o: tests.cpp doctest.h 

clean:
	rm -f main tests main.o tests.o time.o
