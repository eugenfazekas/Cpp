#include <iostream>
#include "tarolo.h"

using namespace std;

int main () {
    Ember Jani(16),Gabi(21);
    Ember Csabi=Jani;

    Tarolo t;
    t.push_back(Jani);
    t.push_back(Gabi);
    t.push_back(Csabi);

    Tarolo m = t; // Tarolo m(t)
    for(int i = 0; i < m.getSize(); i++) {
        cout<<"Eletkorok "<<m[i].getEletkor()<<endl;
    }



}