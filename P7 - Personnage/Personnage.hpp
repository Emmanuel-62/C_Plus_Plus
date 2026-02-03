#ifndef __PERSONNAGE__
#define __PERSONNAGE__

#include <string>

#include "Arme.hpp"

class Personnage {
    private:
        std::string _nom;
        int _vie;
        int _mana;
        Arme _arme;
    
    public:
        Personnage();
        Personnage(const std::string&);
        Personnage(const std::string&, int);
        Personnage(Personnage const&);

        void recevoirDegats(int);
        void attaquer(Personnage&);
        void boirePotionDeVie(int);
        void changerArme(std::string, int);
        bool estVivant();
        void afficherEtat() const;

        std::string getNom() const;
        void setNom(const std::string&);
};

#endif //__PERSONNAGE__