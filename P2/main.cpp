#include "Convertisseur.hpp"
#include <iostream>


int main() {
    const int a = 100;
    std::string unite = "C";

    Convertisseur t1(a, unite);
    Convertisseur t2(10, "F");
    t1.afficher(); // Doit afficher : 100°C
    t1.convertirEnFahrenheit();
    t1.afficher(); // Doit afficher : 212°F

    t2.afficher(); // Doit afficher : 100°C
    t2.convertirEnCelsius();
    t2.afficher(); // Doit afficher : 212°F

    return 0;
}