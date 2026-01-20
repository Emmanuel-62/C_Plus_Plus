#include <iostream>

#include "Rectangle.hpp"


int main(){
    Rectangle r1(5.0, 3.0);
    std::cout << r1.calculerAire() <<std::endl;// Doit afficher : 15
    std::cout << r1.calculerPerimetre() <<std::endl; // Doit afficher : 16
    std::cout << r1.estCarre() <<std::endl; // Doit afficher : false (ou 0)
}