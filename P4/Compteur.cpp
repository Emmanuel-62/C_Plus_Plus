#include <iostream>

#include "Compteur.hpp"

Compteur::Compteur(): m_valeur(0) {}

Compteur::Compteur(const int valeur): m_valeur(valeur) {}

void Compteur::incrementer() {
    this->m_valeur++;
}

void Compteur::decrementer() {
    this->m_valeur--;
}

void Compteur::reinitialiser() {
    this->m_valeur = 0;
}

void Compteur::incrementerDe(const int valeur) {
    this->m_valeur += valeur;
}

int Compteur::getValeur() const {
    return this->m_valeur;
}

void Compteur::afficher() const {
    std::cout <<"Compteur : " <<this->m_valeur <<std::endl;
}