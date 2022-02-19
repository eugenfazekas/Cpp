#include <iostream>
#include "vonal.h"

using namespace std;

int main () {
    Vonal vonal1(5,"piros");
    vonal1.push_back(5);
    vonal1.push_back(2);
    Vonal vonal2(vonal1);
    cout<<"vonal2.getdata"<<endl;
    vonal2.getData();
    vonal2.push_back(4);
    cout<<"vonal2.getdata"<<endl;
    vonal2.getData();
    cout<<"vonal1.getdata"<<endl;
    vonal1.getData();


}