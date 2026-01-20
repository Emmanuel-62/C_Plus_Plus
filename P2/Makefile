a.out: main.o Convertisseur.o
	g++ main.o Convertisseur.o

main.o: main.cpp Convertisseur.hpp 
	g++ -c main.cpp

Convertisseur.o: Convertisseur.cpp Convertisseur.hpp
	g++ -c Convertisseur.cpp

clean: 
	rm -f *.o a.out