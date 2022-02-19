#include <iostream>
#include "eper.h"

using namespace std;

int main() {

    string name;
    int height;
    double weight;
    cout<<"Add meg a tanulo nevet!"<<endl;
    getline(cin,name);
    cout<<"Add meg a tanulo magassagat!"<<endl;
    cin>>height;
    cout<<"Add meg a tanulo testsulyat!"<<endl;
    cin>>weight;

    Eper tanulo_0;
    cout<<"A tanulo neve: "<<tanulo_0.getName()<<endl;
    cout<<"A tanulo magassaga: "<<tanulo_0.getHeight()<<endl;
    cout<<"A tanulo testsulya: "<<tanulo_0.getWeight()<<endl;
    cout<<tanulo_0.getName()<<" BMI-je : "<<tanulo_0.calculateBMI()<<endl;
    cout<<endl;

    Eper tanulo_1(name,height,weight);
    cout<<"A tanulo neve: "<<tanulo_1.getName()<<endl;
    cout<<"A tanulo magassaga: "<<tanulo_1.getHeight()<<endl;
    cout<<"A tanulo testsulya: "<<tanulo_1.getWeight()<<endl;
    cout<<tanulo_1.getName()<<" BMI-je : "<<tanulo_1.calculateBMI()<<endl;
    cout<<endl;

    Eper tanulo_2;
    tanulo_2.setName("Marika");
    tanulo_2.setHeight(160);
    tanulo_2.setWeight(50.1);

    cout<<"A tanulo neve: "<<tanulo_2.getName()<<endl;
    cout<<"A tanulo magassaga: "<<tanulo_2.getHeight()<<endl;
    cout<<"A tanulo testsulya: "<<tanulo_2.getWeight()<<endl;
    cout<<tanulo_2.getName()<<" BMI-je : "<<tanulo_2.calculateBMI()<<endl;
}