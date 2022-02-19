#include <iostream>
#include "rectangle.h"
using namespace std;

int main() {
    Rectangle teglalap(2,5);
    cout<<"T: "<<teglalap.terulet()<<endl;
    cout<<"K: "<<teglalap.kerulet()<<endl;
    cout<<"Festek: "<<teglalap.getPaintCost(teglalap.terulet())<<endl;
}
