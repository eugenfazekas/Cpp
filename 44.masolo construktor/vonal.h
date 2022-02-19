#ifndef VONAL_H
#define VONAL_H
#include <iostream>
#include <string>

using namespace std;

class Vonal
{
private:
    double hossz;
    string szin;
    int * tomb;
    int meret;
public:
    Vonal(double,string);
    Vonal(const Vonal &);
    ~Vonal();
    void push_back(int);
    void getData() const;
};

#endif