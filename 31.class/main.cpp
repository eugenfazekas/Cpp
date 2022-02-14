#include<iostream>

using namespace std;

class Eper{
    public: void szoveg() {
        cout<<"Ez az eper public void class szoveg fuggvenye!"<<endl;
    }
};

int main() {
    Eper eper;
    eper.szoveg();
}