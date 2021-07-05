#pragma once
#include "C_Rectangle.h"
class C_Square :
    public C_Rectangle
{
public:
    C_Square(double age, double weight, double height, char* name, double size) :
        C_Rectangle(age, weight, height, name, size, size)
    {

    }
};