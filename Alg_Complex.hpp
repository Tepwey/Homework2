#ifndef ALG_COMPLEX
#define ALG_COMPLEX
#include "Complex.hpp"

class Alg_Complex : public Complex {
private:
    double Re;
    double Im;

public:
    Alg_Complex();
    Alg_Complex(double r, double i);

    double GetRe() const override;
    double GetIm() const override;
    double GetRadius() const override;
    double GetFi() const override;

    void SetRe(double r) override;
    void SetIm(double i) override;
    void SetRadius(double radius) override;
    void SetFi(double fi) override;
};


#endif