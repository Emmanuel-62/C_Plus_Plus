a.out: main.o Rectangle.o 
	g++ main.o Rectangle.o

main.o: main.cpp Rectangle.hpp 
	g++ -c main.cpp

Rectangle.o: Rectangle.cpp Rectangle.hpp
	g++ -c Rectangle.cpp

clean:
	rm -f *.o a.out