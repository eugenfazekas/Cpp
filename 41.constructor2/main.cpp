#include <iostream>

using namespace std;

class Vonal {
    private:
        double* hossz;

    public:
        Vonal() {
            cout<<"Vonal osztaly 1 constructora"<<endl;
            hossz = new double;
        }
        Vonal(double hossz) {
            this -> hossz = new double;
           * (this -> hossz) = hossz;
            cout<<"Vonal osztaly 2 constructora"<<endl;
        }
        int getHossz() {
            return *hossz;
        }
        ~Vonal() {
            delete hossz;
            cout<<"Vonal osztaly  destructora"<<endl;
        }
};

int main() {
    Vonal k;
    Vonal v(12);
    cout<<v.getHossz()<<endl;
}