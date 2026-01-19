#include "Calculatrice.hpp"

#include <iostream>

double Calculatrice::Somme (const double& a, const double& b) {
    return a + b; 
}

double Calculatrice::Soustraction (const double& a, const double& b) {
    return a - b;
}

double Calculatrice::Division (const double& a, const double& b) {
    if(b == 0) {
        std::cout <<"La division par zéro n'est pas possible !!!" <<std::endl;
        return 0;
    }

    return a / b;
}

double Calculatrice::Multiplication (const double& a, const double& b) {
    return a * b;
}