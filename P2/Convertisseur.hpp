#ifndef __CONVERTISSEUR__
#define __CONVERTISSEUR__

#include <string>

class Convertisseur {
    public:
        Convertisseur();
        Convertisseur(double);
        Convertisseur(double, const std::string&);

        double getValeur() const;
        void setValeur(double);

        std::string getUnite() const;
        void setUnite(std::string&);

        void convertirEnCelsius(const double);
        void convertirEnFahrenheit(const double);

        void convertirEnCelsius();
        void convertirEnFahrenheit();

        void afficher() const;

    private:
        double m_valeur;
        std::string m_unite;
};

#endif // CONVERTISSEUR 