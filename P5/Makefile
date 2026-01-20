a.out: main.o Devise.o 
	g++ main.o Devise.o

main.o: main.cpp Devise.hpp
	g++ -c main.cpp

Devise.o: Devise.cpp Devise.hpp
	g++ -c Devise.cpp

clean:
	rm -f *.o a.out