#include "Personnage.hpp"

#include <iostream>

Personnage::Personnage():
_nom("Inconnu"),
_vie(100), 
_mana(100), 
_nomArme("Epee rouillee"), 
_degatsArme(10)
{
    std::cout <<"Le construteur est pour -> " <<this->_nom <<std::endl;
}

Personnage::Personnage(std::string& nom):
_nom(nom),
_vie(100), 
_mana(100), 
_nomArme("Epee rouillee"), 
_degatsArme(10)
{
    std::cout <<"Le construteur est pour -> " <<this->_nom <<std::endl;
}

Personnage::Personnage(Personnage const& autre):
_nom(autre._nom),
_vie(autre._vie),
_mana(autre._mana),
_nomArme(autre._nomArme),
_degatsArme(autre._degatsArme)
{
    std::cout <<"Le construteur par copie est pour -> " <<this->_nom <<std::endl;
}

void Personnage::recevoirDegats(int nbDegats){
    this->_vie -= nbDegats;
    if(this->_vie < 0) this->_vie = 0;
}

void Personnage::attaquer(Personnage& cible){
    cible.recevoirDegats(this->_degatsArme);
}

void Personnage::boirePotionDeVie(int quantitePotion){
    this->_vie += quantitePotion;
    if (this->_vie == 100) this->_vie = 100;
}

void Personnage::changerArme(std::string nomNouvelleArme, int degatsNouvelleArme){
    this->_nomArme = nomNouvelleArme;
    this->_degatsArme = degatsNouvelleArme;
}

bool Personnage::estVivant(){
    return this->_vie > 0;
}

std::string Personnage::getNom() const{
    return this->_nom;
}

void Personnage::setNom(const std::string& nomNouvelle){
    this->_nom = nomNouvelle;
}