#include "ember.h"
 
 Ember::Ember(int _eletkor): eletkor(_eletkor) {};

 int Ember::getEletkor() const { return eletkor;}

Ember& Ember::operator+=(const Ember &other) {
    eletkor+=other.eletkor;
    return *this;
}

Ember& Ember::operator+=(int eletkor){
    this->eletkor+=eletkor;
    return *this;
}

Ember& Ember::operator-=(const Ember &other) {
    eletkor-=other.eletkor;
    return *this;
}