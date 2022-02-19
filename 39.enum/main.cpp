#include <iostream>

using namespace std;

enum Szinek{PIROS,LILA,FEKETE};

int main() {
    Szinek p = LILA;
    switch (p) 
    {
    case PIROS: cout<<"Piros";
        break;  
    case LILA: cout<<"Lila";
        break; 
    case FEKETE: cout<<"Fekete";
        break;   
    default:
        break;
    }
}