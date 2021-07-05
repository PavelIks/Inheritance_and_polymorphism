#include <iostream>
#include"C_Figure.h"
#include"C_Circle.h"
#include"C_Rectangle.h"
#include"C_Square.h"

int main()
{
    C_Figure f = C_Figure(1, 2, 3, 'a');
    std::cout << f << "\n";
}