#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"
#include "paintit.h"

class Rectangle: public Shape , public PaintIt{
    public:
        Rectangle();
        Rectangle(int,int);
        int terulet() const;
        int kerulet() const;
};
#endif