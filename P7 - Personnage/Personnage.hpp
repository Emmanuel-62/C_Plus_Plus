#ifndef __PERSONNAGE__
#define __PERSONNAGE__

#include <string>

class Personnage {
    private:
        std::string _nom;
        int _vie;
        int _mana;
        std::string _nomArme;
        int _degatsArme;
    
    public:
        Personnage();
        Personnage(std::string&);
        Personnage(Personnage const&);

        void recevoirDegats(int);
        void attaquer(Personnage&);
        void boirePotionDeVie(int);
        void changerArme(std::string, int);
        bool estVivant();

        std::string getNom() const;
        void setNom(const std::string&);
};

#endif //__PERSONNAGE__