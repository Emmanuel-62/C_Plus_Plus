#include "Devise.hpp"


int main() {
    Devise d1(100, "EUR");
    d1.afficher(); // Doit afficher : 100.00 EUR
    d1.convertirVers("USD");
    d1.afficher(); // Doit afficher environ : 110.00 USD
    d1.convertirVers("MAD");
    d1.afficher(); // Doit afficher environ : 1100.00 MAD
    
    return 0;
}