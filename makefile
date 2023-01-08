sfml-app: main.o Board.o
	g++ main.o Board.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system
Board.o: Board.h Board.cpp 
	g++ -c Board.cpp
main.o: main.cpp
	g++ -c main.cpp
