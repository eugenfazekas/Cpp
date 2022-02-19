#ifndef EMBER_H
#define EMBER_H

class Ember
{ 
private:
    int eletkor;
public:
    Ember(int);
    Ember& operator+=(const Ember &);
    Ember& operator+=( int );
    Ember& operator-=(const Ember &);
    int getEletkor() const;
};

#endif