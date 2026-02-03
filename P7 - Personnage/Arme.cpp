#include "Arme.hpp"

#include <iostream>


Arme::Arme(): _nom("Epée rouillee"), _degats(10){}

Arme::Arme(const std::string& nom, int degats): _nom(nom), _degats(degats){}

void Arme::changer(const std::string& nom, int degats){
    this->_nom = nom;
    this->_degats = degats;
}

void Arme::afficher() const{
    std::cout << "Arme : " << this->_nom << " (Dégâts : " << this->_degats << ")" <<std::endl;
}

int Arme::getDegats() const{
    return this->_degats;
}
