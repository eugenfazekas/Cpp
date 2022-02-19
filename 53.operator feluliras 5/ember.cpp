#include "ember.h"

Ember::Ember() { eletkor=0; }
 
 Ember::Ember(int _eletkor): eletkor(_eletkor) {};

 int Ember::getEletkor() const { return eletkor;}

Ember& Ember::operator()(){
         srand(time(0));
         eletkor=rand()%100+1;
         return *this;
}