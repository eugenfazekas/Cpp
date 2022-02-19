#include "shape.h"

Shape::Shape() { height=0; width=0;}

Shape::Shape(int height, int width) {
    this->height=height;
    this->width=width;
}

int Shape::getHeight() const { return height;}
int Shape::getWidth()  const { return width; }
