#ifndef GYEREK_H
#define GYEREK_H
#include "szulo.h"

class Gyerek : public Szulo {
    public:
        Gyerek(int,int,int,int);
        int d;
        void setA(int);
};
#endif