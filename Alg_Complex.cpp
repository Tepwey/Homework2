#include "Alg_Complex.hpp"
#include <cmath>

Alg_Complex::Alg_Complex() {
    Re = 0.0;
    Im = 0.0;
}

Alg_Complex::Alg_Complex(double r, double i) {
    Re = r;
    Im = i;
}

double Alg_Complex::GetRe() const {
    return Re;
}

double Alg_Complex::GetIm() const {
    return Im;
}

double Alg_Complex::GetRadius() const {
    return std::sqrt(std::pow(Re, 2) + std::pow(Im, 2));
}

double Alg_Complex::GetFi() const {
    return std::atan2(Im, Re);
}

void Alg_Complex::SetRe(double r) {
    Re = r;
}

void Alg_Complex::SetIm(double i) {
    Im = i;
}

void Alg_Complex::SetRadius(double radius) {
    double fi = GetFi();
    Re = radius * std::cos(fi);
    Im = radius * std::sin(fi);
}

void Alg_Complex::SetFi(double fi) {
    double radius = GetRadius();
    Re = radius * std::cos(fi);
    Im = radius * std::sin(fi);
}