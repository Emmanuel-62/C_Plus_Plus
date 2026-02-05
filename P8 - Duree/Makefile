a.out: main.o Duree.o
	g++ main.o Duree.o

main.o: main.cpp Duree.hpp
	g++ -c main.cpp

Duree.o: Duree.cpp Duree.hpp
	g++ -c Duree.cpp

clean:
	rm -f *.o a.out