all: chess.o chess_func.o
	gcc chess.o chess_func.o -o chess.exe

chess.o: chess.c
	gcc -c chess.c -o chess.o

chess_func.o: chess_func.c
	gcc -c chess_func.c -o chess_func.o

clean:
	rm *.exe