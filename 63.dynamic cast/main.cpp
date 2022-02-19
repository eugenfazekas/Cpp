#include <iostream>
#include <vector>
using namespace std;

class Shape {
    public:
        Shape() {};
        virtual double area() const = 0;
};

class Rectangle: public Shape {
    public:
        Rectangle(): Shape() {}
        Rectangle(int h, int v): width(v),height(h) {}
        double area() const { return width*height;}
    private:
        int width, height;
};

class Triangle: public Shape {
    public:
        Triangle(): Shape() {}
        Triangle(int h, int v): width(v),height(h) {}
        double area() const { return width*height/2;}
    private:
        int width, height;
};

class Circle: public Shape {
    public:
        Circle(): Shape() {}
        Circle(double radius): radius(radius) {}
        double area() const { return 3.14*radius*radius;}
    private:
        double radius;
};

int main() {
    Rectangle r(10,20);
    Rectangle r2(12,21);
    Triangle t(8,12);
    Circle c(5);

    vector<Shape*> shapes;
    shapes.push_back(&r);
    shapes.push_back(&r2);
    shapes.push_back(&t);
    shapes.push_back(&c);

    for(unsigned int i = 0; i < shapes.size(); i++ ) {

        if(dynamic_cast<Rectangle*>(shapes[i]))
            cout<<"A teglalap terulete "<<shapes[i]->area()<<endl;
        if(dynamic_cast<Triangle*>(shapes[i]))
            cout<<"A haromszog terulete "<<shapes[i]->area()<<endl;
        if(dynamic_cast<Circle*>(shapes[i]))
            cout<<"A kor terulete "<<shapes[i]->area()<<endl;
        
    }
}