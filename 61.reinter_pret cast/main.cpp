#include <iostream>

using namespace std;

struct Ember {
    int eletkor;
    int baratokdb;
    char nem;
    bool reszeg;
};

int main() {
    Ember* Simon = new Ember;
    Simon->eletkor = 20;
    Simon->baratokdb = 0;
    Simon->nem= 'f';
    Simon->reszeg= false;

    int* ptr1 = reinterpret_cast<int*>(Simon);
    ptr1+=1;
    cout<<"*ptr "<<*ptr1<<endl;
}

