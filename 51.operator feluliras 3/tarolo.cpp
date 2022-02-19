#include "tarolo.h"

Tarolo::Tarolo() {
    meret=0;
    tomb = new Ember[0];
}

Tarolo::Tarolo(const Tarolo &other) {
    *this=other;
}

Tarolo::~Tarolo() {
delete[] tomb;
}

void Tarolo::push_back(Ember x){
    Ember* tmp = new Ember[meret+1];
    for(int i = 0; i< meret; i++) {
        tmp[i]=tomb[i];
    }
    tmp[meret++]=x;
    delete[] tomb;
    tomb=tmp;
}

int Tarolo::getSize() const {
    return meret;
}

Ember Tarolo::operator[] (int idx) {
    return tomb[idx];
}

Tarolo& Tarolo::operator=(const Tarolo &other) {
    if(this==&other){
        return *this;
    } else {
    tomb = new Ember[other.meret];
    meret = other.meret;
    for(int i = 0; i < meret; i++){
        tomb[i]=other.tomb[i];
    }
    return *this;
    }
}