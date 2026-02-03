a.out: main.o Personnage.o Arme.o
	g++ main.o Personnage.o Arme.o

main.o: main.cpp Personnage.hpp
	g++ -c main.cpp

Personnage.o: Personnage.hpp Personnage.cpp Arme.hpp
	g++ -c Personnage.cpp

Arme.o: Arme.cpp Arme.hpp
	g++ -c Arme.cpp

clean:
	rm -f *.o a.out