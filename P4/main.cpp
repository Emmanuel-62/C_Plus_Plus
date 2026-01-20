#include "Compteur.hpp"

int main() {
    const int a = 0;

    Compteur c1(0);

    c1.incrementer();
    c1.incrementer();
    c1.afficher(); // Doit afficher : Compteur : 2
    c1.decrementer();
    c1.afficher(); // Doit afficher : Compteur : 1
    c1.reinitialiser();
    c1.afficher(); // Doit afficher : Compteur : 0
    

    return 0;
}