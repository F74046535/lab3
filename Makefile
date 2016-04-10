all :cow.o main.cpp
	g++ -o main main.cpp cow.o
cow.o:cow.cpp cow.h
	g++ -c cow.cpp -o cow.o
