#include "Operators.hpp"
#include <iostream>
#include <cmath>

Alg_Complex operator+(const Complex& a, const Complex& b) {
    return Alg_Complex(a.GetRe() + b.GetRe(), a.GetIm() + b.GetIm());
}

Alg_Complex operator-(const Complex& a, const Complex& b) {
    return Alg_Complex(a.GetRe() - b.GetRe(), a.GetIm() - b.GetIm());
}

Trig_Complex operator*(const Complex& a, const Complex& b) {
    return Trig_Complex(a.GetRadius() * b.GetRadius(), a.GetFi() + b.GetFi());
}

Trig_Complex operator/(const Complex& a, const Complex& b) {
    return Trig_Complex(a.GetRadius() / b.GetRadius(), a.GetFi() - b.GetFi());
}

Alg_Complex operator-(const Complex& a) {
    return Alg_Complex(-a.GetRe(), -a.GetIm());
}

Trig_Complex Sqrt_Complex(const Complex& num) {
    return Trig_Complex(std::sqrt(num.GetRadius()), num.GetFi() / 2.0);
}

void Quadro(const Complex& a, const Complex& b, const Complex& c) {
    Alg_Complex four(4.0, 0.0);
    Alg_Complex two(2.0, 0.0);

    auto D = b * b - (four * a * c);
    auto sqrt_D = Sqrt_Complex(D);

    auto x1 = (-b + sqrt_D) / (two * a);
    auto x2 = (-b - sqrt_D) / (two * a);

    std::cout << "Root 1: " << x1.GetRe() << " + " << x1.GetIm() << "i" << std::endl;
    std::cout << "Root 2: " << x2.GetRe() << " + " << x2.GetIm() << "i" << std::endl;
}