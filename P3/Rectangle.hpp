#ifndef __RECTANGLE__
#define __RECTANGLE__

class Rectangle {
    public:
        Rectangle(const double);
        Rectangle(const double, const double);

        double calculerAire() const;
        double calculerPerimetre() const;
        bool estCarre() const;

        void setLongueur(const double);
        void setLargeur(const double);

    private:
        double m_longueur;
        double m_largeur;
};

#endif //RECTANGLE