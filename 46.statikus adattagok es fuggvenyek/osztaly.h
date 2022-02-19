#ifndef OSZTALY_H
#define OSZTALY_H

class Osztaly {
private:
    static int objszam;
public:
    Osztaly(int);
    int ertek;
    static int getObjszam();
};
#endif