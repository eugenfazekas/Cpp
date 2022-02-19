# include "paintit.h"

PaintIt::PaintIt() {price = 52;}

int PaintIt::getPaintCost(int teruler) const { return price * teruler; }