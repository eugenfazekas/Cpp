#include <iostream>
#include "ember.h"

using namespace std;

int main () {
    Ember Jani(16),Gabi(21),Csaba(17),Tamara(17);
    Jani+=Gabi;
    Jani+=1;
    Jani-=Csaba;
    Jani-=Gabi;
    cout<<Jani.getEletkor()<<endl;
}