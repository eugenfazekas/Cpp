#include <iostream>

using namespace std;

int main() {

    int a = 5, b = 6;
    int * pA=&a, *pB=&b;
    int ** pPA = &pA;
    cout<<"Az a valtozo erteke: "<<*pA<<" es a cime: "<<pA<<endl;
    cout<<"Az a valtozo erteke: "<<*pB<<" es a cime: "<<pB<<endl;
    cout<<a<<" "<<*pA<<" "<<**pPA<<endl;
}