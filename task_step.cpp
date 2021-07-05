#include <iostream>
#include"C_Wildlife_Kingdom.h"
#include"C_Bacteria.h"
#include"C_Rectangle.h"
#include"C_Square.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    C_Wildlife_Kingdom wk = C_Wildlife_Kingdom(1, 2, 3, 'a');
    std::cout << wk << "\n";
}