#ifndef EPER_H
#define EPER_H
#include <string>
 class Eper 
 {
private:
    std::string newname;
    int newheight;
    double newweight;
public:
    Eper();
    Eper(std::string name,int height,double weight);

    void setName(std::string name);
    std::string getName() const;

    void setHeight(int height);
    int getHeight() const;

    void setWeight(double weight);
    double getWeight() const;

    double calculateBMI() const;
};
#endif