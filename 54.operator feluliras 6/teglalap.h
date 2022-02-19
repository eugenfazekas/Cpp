#ifndef TEGLALAP_H
#define TEGLALAP_H
#include <iostream>

using namespace std;
class Teglalap{
    
    public:
    friend ostream& operator<<(ostream &, const Teglalap& );
    friend istream& operator>>(istream &, Teglalap &);    
        Teglalap();
        Teglalap(int,int);
        int terulet() const;
        int kerulet() const;
    private:
        int hosszusag;
        int szelesseg;
};
#endif