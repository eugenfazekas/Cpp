#include <iostream>
#include <vector>

using namespace std;

int main() {

    int a = 5; // ez a valtozo;
    int*  pA = &a; // pA  mutat az "a" valtozo memoriacimere;
    int vA = *pA; // *pA adja vissza "a" valtozo erteket;

    int* b = new int; // lefoglalunk egy "b" nevu integernek egy memoria cimet;
    *b = 5; // itt at adjuk a b nevu integer memoriacimenek az 5 errteket.

    delete b ; // ha memoria cimet foglalunk le,
               // muvelet utan fel is kell szabaditani. ("torolni")

    int* tomb = new int[5];    // lefoglal egy memoricimet integer tombhoz;  

    tomb[2] = 1; // tomb harmadik elemenek erteke 1 lesz ;
    cout<<"tomb[2]: "<<tomb[2]<<endl;
    int* ptr = tomb;
    *(ptr+2) = 2; // tomb harmadik elemenek erteke 2 lesz; 
     cout<<"tomb[2]: "<<tomb[2]<<endl;

    delete[] tomb ; // felszabaditja a tomb memoria cimet;
}  