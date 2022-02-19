#include <iostream>
#include "gyerek.h"
using namespace std;

int main() {
    Gyerek gyerek1(1,2,3,4);
    gyerek1.setA(2);
    cout<<"Gyerek1: "<<gyerek1.getA()<<gyerek1.getB()<<gyerek1.c<<gyerek1.d<<endl;
}