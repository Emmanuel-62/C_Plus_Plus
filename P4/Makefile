a.out: main.o Compteur.o
	g++ main.o Compteur.o


main.o: main.cpp Compteur.hpp 
	g++ -c main.cpp


Compteur.o: Compteur.cpp Compteur.hpp
	g++ -c Compteur.cpp


clean:
	rm -f *.o a.out