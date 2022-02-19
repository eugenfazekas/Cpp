#include "rectangle.h"

Rectangle::Rectangle(): Shape () {}

Rectangle::Rectangle(int height, int width): Shape (height,width) {}

int Rectangle::terulet() const { return width * height;}

int Rectangle::kerulet() const { return  2 * (width + height);}

