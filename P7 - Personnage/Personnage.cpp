#include "Personnage.hpp"

#include <iostream>

Personnage::Personnage():
_nom("Inconnu"),
_vie(100), 
_mana(100),
_arme(0) 
{
    this->_arme = new Arme();
}

Personnage::Personnage(const std::string& nom):
_nom(nom),
_vie(100), 
_mana(100),
_arme(0)
{
    this->_arme = new Arme();
}

Personnage::Personnage(const std::string& nomArme, int degats):
_nom("Inconnu"),
_vie(100), 
_mana(100),
_arme(0)
{
    this->_arme = new Arme(nomArme, degats);
}

Personnage::~Personnage(){
    delete _arme;
}

Personnage::Personnage(Personnage const& autre):
_nom(autre._nom),
_vie(autre._vie),
_mana(autre._mana),
_arme(autre._arme)
{}

void Personnage::recevoirDegats(int nbDegats){
    this->_vie -= nbDegats;
    if(this->_vie < 0) this->_vie = 0;
}

void Personnage::attaquer(Personnage& cible){
    cible.recevoirDegats(this->_arme->getDegats());
}

void Personnage::boirePotionDeVie(int quantitePotion){
    this->_vie += quantitePotion;
    if (this->_vie == 100) this->_vie = 100;
}

void Personnage::changerArme(std::string nomNouvelleArme, int degatsNouvelleArme){
    this->_arme->changer(nomNouvelleArme, degatsNouvelleArme);
}

bool Personnage::estVivant(){
    return this->_vie > 0;
}

void Personnage::afficherEtat() const {
    std::cout <<"Nom -> " <<this->_nom <<std::endl;
    std::cout <<"Vie -> " <<this->_vie <<std::endl;
    std::cout <<"Mana -> " <<this->_mana <<std::endl;
    this->_arme->afficher();
}

std::string Personnage::getNom() const{
    return this->_nom;
}

void Personnage::setNom(const std::string& nomNouvelle){
    this->_nom = nomNouvelle;
}