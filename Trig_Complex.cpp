#include "Trig_Complex.hpp"
#include <cmath>

Trig_Complex::Trig_Complex() {
    Radius = 0.0;
    Fi = 0.0;
}

Trig_Complex::Trig_Complex(double rad, double fi) {
    Radius = rad;
    Fi = fi;
}

double Trig_Complex::GetRadius() const {
    return Radius;
}

double Trig_Complex::GetFi() const {
    return Fi;
}

double Trig_Complex::GetRe() const {
    return Radius * std::cos(Fi);
}

double Trig_Complex::GetIm() const {
    return Radius * std::sin(Fi);
}

void Trig_Complex::SetRadius(double rad) {
    Radius = rad;
}

void Trig_Complex::SetFi(double fi) {
    Fi = fi;
}

void Trig_Complex::SetRe(double r) {
    double i = GetIm();
    Radius = std::sqrt(std::pow(r, 2) + std::pow(i, 2));
    Fi = std::atan2(i, r);
}

void Trig_Complex::SetIm(double i) {
    double r = GetRe();
    Radius = std::sqrt(std::pow(r, 2) + std::pow(i, 2));
    Fi = std::atan2(i, r);
}