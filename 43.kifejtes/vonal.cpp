#include "vonal.h"

Vonal::Vonal(/* args */) {}

Vonal::Vonal(double hossz) {
    this -> hossz = hossz;
}

double Vonal::getHossz() const {
    return hossz;
}
