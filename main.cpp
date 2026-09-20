#include <iostream>
#include <cmath>
#include "Alg_Complex.hpp"
#include "Trig_Complex.hpp"
#include "Operators.hpp"


int main() {
    double Re_a;
    double Re_b;
    double Re_c;

    std::cout << "ax^2 + bx + c = 0\n" << std::endl;
    std::cout << "Enter a: " << std::endl;
    std::cin >> Re_a;
    std::cout << "Enter b: " << std::endl;
    std::cin >> Re_b;
    std::cout << "Enter c: " << std::endl;
    std::cin >> Re_c;

    Alg_Complex a(Re_a, 0.0);
    Alg_Complex b(Re_b, 0.0);
    Alg_Complex c(Re_c, 0.0);


    Quadro(a, b, c);
    
    return 0;
}