a.out: main.o NotesEleve.o
	g++ main.o NotesEleve.o

main.o: main.cpp NotesEleve.hpp
	g++ -c main.cpp

NotesEleve.o: NotesEleve.cpp NotesEleve.hpp
	g++ -c NotesEleve.cpp

clean: 
	rm -f *.o a.out main