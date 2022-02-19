#include <iostream>

using namespace std;

class Ember {
    public:
        Ember() {}
        void szia() {
            cout<<"Szia!"<<endl;
        }
        int eletkor;
};

void fv(Ember* e) {
    e->eletkor = 5;
    e->szia();
}

int main() {

    const Ember* e1 = new Ember;
    fv(const_cast<Ember*>(e1));
    Ember* ptr3 = const_cast<Ember*>(e1);
    cout<<"ptr3->eletkor: "<<ptr3->eletkor<<endl;

    const Ember * e2 = new Ember;
    fv(const_cast<Ember*>(e2));

    int* i2 = new int(125);
    const int* ptr2 = const_cast<const int*> (i2);
    cout<<"i2: "<<i2<<endl;

    const  int* i1 = new int(125);
    int* ptr1 = const_cast<int*>(i1);
    cout<<"i1: "<<i1<<endl;
    cout<<"ptr1: "<<*ptr1<<endl;
    *ptr1=2;
    cout<<"ptr1: "<<*ptr1<<endl;
}