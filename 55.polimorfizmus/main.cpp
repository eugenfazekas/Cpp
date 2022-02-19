#include <iostream>
#include <vector>
using namespace std;

class Shape {
    public:
        Shape() { width=0; height=0;}
        void setWidth(int w)  { width = w;}
        void setHeight(int h) {height = h;}
    protected:
        int width, height;
};

class Rectangle: public Shape {
public:
    Rectangle(): Shape() {}
    void area() {
        cout<<"A teglalap terulete: "<<width*height<<endl;
    }
};

class Triangle: public Shape {
public:
    Triangle(): Shape() {}
    void area() {
        cout<<"A haromszog terulete: "<<(width*height)/2<<endl;
    }
};

int main() {
    Rectangle r;
    Triangle t;
/*
    Shape * shape = &r;
    shape->setWidth(10);
    shape->setHeight(20);

    shape = &t;
    shape->setWidth(12);
    shape->setHeight(10);
*/
    vector<Shape*> v;
    v.push_back(&r);
    v.push_back(&t);

    for(unsigned int i = 0; i < v.size(); i++) {
        v[i]->setWidth(10);
        v[i]->setHeight(20);
    }


    r.area();
    t.area();
}