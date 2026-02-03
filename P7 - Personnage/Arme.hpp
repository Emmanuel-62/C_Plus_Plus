#ifndef __ARME__
#define __ARME__

#include <string>

class Arme{
    private:
        std::string _nom;
        int _degats;

    public:
        Arme();
        Arme(const std::string&, int);

        void changer(const std::string&, int);
        void afficher() const;

        int getDegats() const;
};

#endif //__ARME__