#ifndef __COMPTEUR__
#define __COMPTEUR__

class Compteur {
    public:
        Compteur();
        Compteur(const int);

        void incrementer();
        void decrementer();
        void reinitialiser();
        void incrementerDe(const int);

        int getValeur() const;

        void afficher() const;
    
    private:
        int m_valeur;
};

#endif //COMPTEUR