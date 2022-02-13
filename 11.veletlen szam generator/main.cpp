#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {

    srand(time(0));
    int a = rand()%15;
    cout<<"A veletlen szam: "<<a<<endl;
}