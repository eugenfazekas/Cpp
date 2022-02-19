#include <iostream>
#include "ember.h"

using namespace std;

void kiir(const Ember &obj) {
    cout<<obj.eletkor;
}

int main () {
    Ember e(17);
    kiir(e);
}