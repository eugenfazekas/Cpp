#include "osztaly.h"

int Osztaly::objszam=0;
int Osztaly::getObjszam() {return objszam;}
Osztaly::Osztaly(int x):ertek(x) {
    objszam++;
}