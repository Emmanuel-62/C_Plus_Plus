a.out: main.o Personnage.o 
	g++ main.o Personnage.o

main.o: main.cpp Personnage.hpp 
	g++ -c main.cpp

Personnage.o: Personnage.hpp Personnage.cpp
	g++ -c Personnage.cpp

clean:
	rm -f *.o a.out