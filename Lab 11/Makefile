main: main.o profile.o network.o 
	g++ -o main main.o profile.o network.o 

tests: tests.o profile.o network.o
	g++ -o tests tests.o profile.o network.o

main.o: main.cpp 

tests.o: tests.cpp doctest.h 

profile.o: profile.cpp profile.h 

network.o: network.cpp network.h 

clean:
	rm -f main tests *.o