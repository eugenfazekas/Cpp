#ifndef EMBER_H
#define EMBER_H

 #include <ctime>
 #include <cstdlib>

class Ember
{ 
private:
    int eletkor;
public:
    Ember();
    Ember(int);
    int getEletkor() const;
    Ember& operator()();
};

#endif