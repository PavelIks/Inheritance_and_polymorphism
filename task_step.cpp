#include <iostream>
#include"C_Wildlife_Kingdom.h"
#include"C_Bacteria.h"
#include"C_Rectangle.h"
#include"C_Square.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    C_Wildlife_Kingdom wk1 = C_Wildlife_Kingdom(1, 2, 3, (char*)"blen");
    std::cout << wk1 << "\n";

    C_Bacteria b1 = C_Bacteria(NULL, NULL, NULL, (char*)"Bacillus", (char*)"Органотрофы");
    std::cout << b1 << "\n";
}