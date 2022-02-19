#ifndef EMBER_H
#define EMBER_H

class Ember
{
friend void kiir(const Ember &obj);  
private:
    int eletkor;
public:
    Ember(int);
};

#endif