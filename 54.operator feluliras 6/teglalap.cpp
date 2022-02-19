#include "teglalap.h"

Teglalap::Teglalap() {}

Teglalap::Teglalap(int hosszusag, int szelesseg): hosszusag(hosszusag), szelesseg(szelesseg) {}

int Teglalap::terulet() const { return hosszusag * szelesseg;}

int Teglalap::kerulet() const { return  2 * (hosszusag + szelesseg);} 

ostream& operator<<(ostream &out, const Teglalap&obj) {
    out<<"A teglalap szelessege: "<<obj.szelesseg<<"; hosszusaga: "<<obj.hosszusag;
    return out;
}

istream& operator>>(istream &input, Teglalap &obj) {
    cout<<"Add meg a teglalap szelesseget"<<endl;
    input>>obj.szelesseg;
    cout<<"Add meg a teglalap hosszusagat"<<endl;
    input>>obj.hosszusag;
    // input>>obj.szelesseg>>obj.hosszusag;
    return input;
}