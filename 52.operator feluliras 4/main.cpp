#include "csiga.h"
#include <iostream>

using namespace std;

int main() {
    Csiga lassu(12), gyors(56);
    cout<<(lassu+gyors+2).getSebesseg()<<endl;
    Csiga uj = lassu+gyors;
    cout<<lassu.getSebesseg()<<endl;
    cout<<gyors.getSebesseg()<<endl; 
    cout<<uj.getSebesseg()<<endl;

}