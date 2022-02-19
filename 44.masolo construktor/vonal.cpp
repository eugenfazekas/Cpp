#include "vonal.h"

Vonal::Vonal(double _hossz = 0 ,string _szin = ""): hossz(_hossz), szin(_szin) {
    tomb = new int[0];
    meret = 0;
}

Vonal::Vonal(const Vonal &obj) {
    this -> hossz=obj.hossz;
    this -> szin=obj.szin;

    this -> tomb = new int[obj.meret];
    this -> meret = obj.meret;
    for(int i = 0; i < obj.meret; i++ ) {
        this->tomb[i] = obj.tomb[i];
    }


}

Vonal::~Vonal() {
    delete tomb;
}

void Vonal::push_back(int x) {
    int* tmp = new int[meret+1];
    for(int i = 0 ; i < meret; i++) {
        tmp[i]=tomb[i];
    }
    tmp[meret++] = x;
    delete tomb;
    tomb = tmp;
}

void Vonal::getData() const {
    cout<<hossz<<" "<<szin<<endl; 
    for(int i = 0; i < meret; i++) {
        cout<<tomb[i]<<" "<<endl;
    }
}

