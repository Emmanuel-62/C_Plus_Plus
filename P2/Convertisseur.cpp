#include "Convertisseur.hpp"

#include <iostream>

Convertisseur::Convertisseur(): m_valeur(0.0), m_unite("C"){};

Convertisseur::Convertisseur(double valeur) {
    this->m_valeur = valeur;
}

Convertisseur::Convertisseur(double valeur, const std::string& unite){
    this->m_valeur = valeur;
    this->m_unite = unite;
}

double Convertisseur::getValeur()const {
    return this->m_valeur;
}

void Convertisseur::setValeur(double valeur) {
    this->m_valeur = valeur;
}

std::string Convertisseur::getUnite()const {
    return this->m_unite;
}

void Convertisseur::setUnite(std::string& unite) {
    this->m_unite = unite;
}

void Convertisseur::convertirEnCelsius(const double valeur) {
    this->m_valeur = ((valeur - 32.0)*(5.0/9.0));
    this->m_unite = "C";
}

void Convertisseur::convertirEnCelsius() {
    this->m_valeur = ((this->m_valeur - 32.0)*(5.0/9.0));
    this->m_unite = "C";
}

void Convertisseur::convertirEnFahrenheit(const double valeur) {
    this->m_valeur = ((valeur * (9.0/5.0))+32.0);
    this->m_unite = "F";
}

void Convertisseur::convertirEnFahrenheit() {
    this->m_valeur = ((this->m_valeur * (9.0/5.0))+32.0);
    this->m_unite = "F";
}

void Convertisseur::afficher() const{
    std::cout<<this->m_valeur <<" °" <<this->m_unite <<std::endl;
}