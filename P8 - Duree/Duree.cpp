#include "Duree.hpp"

Duree::Duree(): _heures(0), _minutes(0), _secondes(0) {}

Duree::Duree(int heures): _heures(heures), _minutes(0), _secondes(0) {}

Duree::Duree(int heures, int minutes): _heures(heures), _minutes(minutes), _secondes(0) {}

Duree::Duree(int heures, int minutes, int secondes): _heures(heures), _minutes(minutes), _secondes(secondes) {}

bool Duree::estEgale(Duree const& autre) const{
    return (this->_heures == autre._heures && this->_minutes == autre._minutes && this->_secondes == _secondes);
}

bool operator == (Duree const & a, Duree const & b)
{
    return a.estEgale(b);
}

bool operator != (Duree const & a, Duree const & b)
{
    return not (a == b);
}

bool operator < (Duree const& a, Duree const& b) {
    return false;
}
