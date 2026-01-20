#include "Rectangle.hpp"

Rectangle::Rectangle(const double largeur): m_largeur(largeur), m_longueur(largeur){}

Rectangle::Rectangle(const double longueur, const double largeur): m_largeur(largeur), m_longueur(longueur){}

double Rectangle::calculerAire() const {
    return this->m_longueur * this->m_largeur;
}

double Rectangle::calculerPerimetre() const {
    return ((this->m_longueur + this->m_largeur)*2);
}

bool Rectangle::estCarre() const {
    if(this->m_longueur == this->m_largeur) {
        return true;
    }
    return false;
}

void Rectangle::setLongueur(const double longueur) {
    this->m_longueur = longueur;
}

void Rectangle::setLargeur(const double largeur) {
    this->m_largeur = largeur;
}