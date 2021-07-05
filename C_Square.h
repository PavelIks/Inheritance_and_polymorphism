#pragma once
#include "C_Rectangle.h"
class C_Square :
    public C_Rectangle
{
public:
    C_Square(double positionX, double positionY, double sq, char simb, double size) :
        C_Rectangle(positionX, positionY, sq, simb, size, size) {

    }
};