#ifndef SHAPE_H
#define SHAPE_H

class Shape {

protected:
    int height; 
    int width;
public:
    Shape();
    Shape(int,int);
    int getHeight() const;
    int getWidth() const;
};
#endif