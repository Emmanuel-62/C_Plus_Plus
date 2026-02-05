#ifndef __DUREE__
#define __DUREE__

class Duree {
    private:
        int _heures;
        int _minutes;
        int _secondes;

    public:
        Duree();
        Duree(int);
        Duree(int, int);
        Duree(int, int, int);

        bool estEgale(Duree const&) const;
};

bool operator == (Duree const&, Duree const&);
bool operator != (Duree const&, Duree const&);
bool operator < (Duree const&, Duree const&);
bool operator >= (Duree const&, Duree const&);

#endif //__DUREE__