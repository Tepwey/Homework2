#ifndef OPERATIONS_H
#define OPERATIONS_H

#include "Complex.hpp"
#include "Alg_Complex.hpp"
#include "Trig_Complex.hpp"


Alg_Complex operator+(const Complex& a, const Complex& b);
Alg_Complex operator-(const Complex& a, const Complex& b);
Trig_Complex operator*(const Complex& a, const Complex& b);
Trig_Complex operator/(const Complex& a, const Complex& b);
Alg_Complex operator-(const Complex& a);

Trig_Complex Sqrt_Complex(const Complex& num);


void Quadro(const Complex& a, const Complex& b, const Complex& c);

#endif