 #include <iostream>
#include "ember.h"

 using namespace std;

 int main() {

     Ember Simon(16);
     Ember Karcsi;
     Karcsi();
     Simon();
     cout<<"Simon Eletkor: "<<Simon.getEletkor()<<endl;
     cout<<"Karcsi Eletkor: "<<Karcsi.getEletkor()<<endl;
 }