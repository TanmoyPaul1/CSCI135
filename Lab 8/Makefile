
main: main.o funcs.o imageio.o
	g++ -o main main.o funcs.o imageio.o
	@echo 
	@echo run to remove pictures: make cleanpics

main.o: main.cpp imageio.h

funcs.o: funcs.cpp funcs.h 

imageio.o: imageio.cpp imageio.h

clean:
	rm -f main main.o funcs.o imageio.o 

cleanpics:
	rm -f taskA.pgm taskB.pgm taskC.pgm taskD.pgm taskE.pgm taskF.pgm taskG.pgm 
	rm -f taskA2.pgm taskB2.pgm taskC2.pgm taskD2.pgm taskE2.pgm taskF2.pgm taskG2.pgm
