#include <iostream>

using namespace std;

void csere(int *a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
     cout<<"a = "<<*a<<" ,b = "<<*b<<endl; 
};

int main() {
    int a = 5, b = 7;
    cout<<"a = "<<a<<" ,b = "<<b<<endl; 
    csere(&a,&b);
    cout<<"a = "<<a<<" ,b = "<<b<<endl; 
}