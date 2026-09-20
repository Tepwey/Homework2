#ifndef TRIG_COMPLEX_H
#define TRIG_COMPLEX_H

#include "Complex.hpp"

class Trig_Complex : public Complex {
private:
    double Radius;
    double Fi;

public:
    Trig_Complex();
    Trig_Complex(double rad, double fi);
    
    double GetRadius() const override;
    double GetFi() const override;
    double GetRe() const override;
    double GetIm() const override;

    void SetRadius(double rad) override;
    void SetFi(double fi) override;
    void SetRe(double r) override;
    void SetIm(double i) override;
};

#endif