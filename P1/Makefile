a.out: main.o Calculatrice.o
	g++ main.o Calculatrice.o

main.o : main.cpp Calculatrice.hpp
	g++ -c main.cpp

Calculatrice.o : Calculatrice.hpp Calculatrice.cpp
	g++ -c Calculatrice.cpp

clean : 
	rm -f *.o a.out