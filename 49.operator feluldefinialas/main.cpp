#include <iostream>
#include "osztaly.h"
#include "asztal.h"

using namespace std;

int main() {

    Osztaly obj1(5), obj2(5);

    if(obj1 == obj2)
    cout<<"Egyenlo a ket obiektum"<<endl; 

    if(obj1 != obj2) 
    cout<<"A ket obiektum nem egyenlo"<<endl;

    Asztal a1(4,"fekete ","fa"), a2(3,"piros ","vas"), a3(4,"barna ","fa");

    
    if (a1==a3) {
        cout<<"Ezek az asztalok jok"<<endl;
    } else   {
        cout<<"Ezek az asztalok rosszak"<<endl;
    }

    if (a2!=a3) {
        cout<<"Ezek az asztalok rosszak"<<endl;

    } else   {
        cout<<"Ezek az asztalok jok"<<endl;
    }

    if (a2!=a1) {
        cout<<"Ezek az asztalok rosszak"<<endl;

    } else   {
        cout<<"Ezek az asztalok jok"<<endl;
    }
    
}