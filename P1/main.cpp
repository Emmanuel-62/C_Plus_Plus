#include <iostream>

#include "Calculatrice.hpp"


int main(){
    Calculatrice cal;
    double a = 1.3;
    double b = 2.3;

    std::cout <<cal.Somme(a, b) <<std::endl;
    std::cout <<cal.Soustraction(3, 2.2) <<std::endl;
    std::cout <<cal.Multiplication(2, 3) <<std::endl;
    std::cout <<cal.Division(10, 2) <<std::endl;

    return 0;
}