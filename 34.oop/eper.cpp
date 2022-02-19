#include "eper.h"
#include <string>
using namespace std;

Eper::Eper() {
    setName("Gyuri");
    setHeight(170);
    setWeight(80.1);
}

Eper::Eper(string name, int height, double weight)
{
    newname=name;
    newheight=height;
    newweight=weight;
}

void Eper::setName(string name) {
    newname=name;
}

string Eper::getName() const
{
    return newname;
}

void Eper::setHeight(int height) {
    newheight=height;
}

int Eper::getHeight() const
{
    return newheight;
}

void Eper::setWeight(double weight) {
    newweight=weight;
}

double Eper::getWeight() const
{
    return newweight;
}

double Eper::calculateBMI() const {
    return (newweight*703)/(newheight*newheight);
}

