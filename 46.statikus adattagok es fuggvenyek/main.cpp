#include <iostream>
#include "osztaly.h"

using namespace std;

int main() {
    Osztaly obj1(6);

   cout<<"Osztaly objszam: "<<Osztaly::getObjszam()<<endl;

    Osztaly obj2(7);

    cout<<"obj1: "<<obj1.ertek<<endl;
    cout<<"obj2: "<<obj2.ertek<<endl;

    cout<<"Osztaly objszam: "<<Osztaly::getObjszam()<<endl;

}