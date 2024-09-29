all: brazoRobotico

brazoRobotico.o: brazoRobotico.cpp brazoRobotico.h
	g++ -c brazoRobotico.cpp

main.o: main.cpp
	g++ -c main.cpp

brazoRobotico: brazoRobotico.o main.o
	g++ -o brazoRobotico brazoRobotico.o main.o

clean:
	rm -f *.o brazoRobotico

test: all
	./brazoRobotico
