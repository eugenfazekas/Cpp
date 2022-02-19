#include <iostream>

using namespace std;

class Parent {
    public:
        Parent() {}
        void kiir() { 
            cout<<"Ez itt az Szulo osztaly "<<endl;
        }
};

class  Child: public Parent {
    public:
        Child(){}
         void echo() {
            cout<<"Ez itt a gyerek osztaly!";
        }
};

int main() {

    Parent* p1 = new Parent;
    Child* c1 = static_cast<Child*>(p1);

    c1->kiir();
    c1->echo();


    Child c2;
    Parent p2 = static_cast<Parent>(c2); 
    p2.kiir();
}