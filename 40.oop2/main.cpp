#include <iostream>

using namespace std;

class Teglalap{
        double a;
        double b;
    public:
        void setA(int a) {
            this -> a = a;
        }

        double getA() const {
            return a;
        }

        void setB(int b) {
            this -> b = b;
        }

        double getB() const {
            return b;
        }

        double terulet() const{
            return a*b;
        }
        double kerulet() const {
            return 2*(a+b);
        }
};

int main() {
    int x,y;
    Teglalap tegla1;
    cin>>x;
    cin>>y;
    tegla1.setA(x);
    tegla1.setB(y);
    cout<<tegla1.terulet()<<endl;
    cout<<tegla1.kerulet();
}