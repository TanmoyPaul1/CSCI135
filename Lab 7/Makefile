main: main.o unindent.o indent.o
	g++ -o main main.o unindent.o indent.o 
	@echo 
	@echo run: ./main \< bad-code.cpp

main.o: main.cpp

unindent.o: unindent.cpp unindent.h

indent.o: indent.cpp indent.h

clean: 
	rm -f main main.o unindent.o indent.o