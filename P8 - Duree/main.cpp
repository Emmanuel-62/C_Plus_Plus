#include <iostream>

#include "Duree.hpp"


int main(){
    std::cout <<"Bonjour les mondes des bisous nourses !!!" <<std::endl;
    Duree duree1(0, 10, 28), duree2(0, 15, 2);

    if (not(duree1 != duree2))
        std::cout << "Les durees sont identiques" <<std::endl;
    else
        std::cout << "Les durees sont differentes" <<std::endl;

    return 0;
}