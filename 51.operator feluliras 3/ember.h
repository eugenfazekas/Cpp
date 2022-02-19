#ifndef EMBER_H
#define EMBER_H

class Ember
{ 
private:
    int eletkor;
public:
    Ember();
    Ember(int);
    int getEletkor() const;
    Ember& operator=(const Ember &);
};

#endif