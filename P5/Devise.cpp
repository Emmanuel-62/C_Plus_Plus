#include <iostream>

#include "Devise.hpp"

Devise::Devise(const double montant, const std::string& devise):m_montant(montant), m_devise(devise) {}

void Devise::convertirVers(const std::string& devise) {
    if(this->m_devise == devise) {
        this->m_montant == this->m_montant;
    }else if(devise == "USD") {
        this->m_montant *= EUR_USD;
        this->m_devise = "USD";
    }else if(devise == "MAD") {
        this->m_montant *= EUR_MAD;
        this->m_devise = "MAD";
    }else {
        std::cout <<"La devise entrée n'est disponible !!!" <<std::endl;
    }
}

double Devise::obtenirMontant() {
    return this->m_montant;
}

std::string Devise::obtenirDevise() {
    return this->m_devise;
}

void Devise::afficher() const {
    std::cout <<this->m_montant <<" " <<this->m_devise <<std::endl;
}