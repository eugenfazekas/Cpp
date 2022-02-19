#include "ember.h"

Ember::Ember() { eletkor=0; }
 
 Ember::Ember(int _eletkor): eletkor(_eletkor) {};

 int Ember::getEletkor() const { return eletkor;}

Ember& Ember::operator=(const Ember &other) {
    eletkor=other.eletkor;
    return * this;
}