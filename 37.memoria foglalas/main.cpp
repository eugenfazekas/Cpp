#include <iostream>

using namespace std;

int main() {

    int * a = new int; //memoria cim
    *a = 5;
    cout<<"a cime "<<a<<endl;
    cout<<"*a "<<*a<<endl;
    delete a;
    cout<<"a "<<*a<<endl;
}