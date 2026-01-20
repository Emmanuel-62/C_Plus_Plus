#ifndef __DEVISE__
#define __DEVISE__

#include <string>

class Devise {
    public: 
        const double EUR_USD = 1.10;
        const double EUR_MAD = 11.0;

        Devise(const double, const std::string&);

        void convertirVers(const std::string&);
        double obtenirMontant();
        std::string obtenirDevise();

        void afficher() const;

    private:
        double m_montant; 
        std::string m_devise;
};

#endif // __DEVISE__