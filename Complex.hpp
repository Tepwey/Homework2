#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {

public:
    Complex() = default;

    virtual double GetRe() const = 0;
    virtual double GetIm() const = 0;
    virtual double GetRadius() const = 0;
    virtual double GetFi() const = 0;

    virtual void SetRe(double re) = 0;
    virtual void SetIm(double im) = 0;
    virtual void SetRadius(double radius) = 0;
    virtual void SetFi(double fi) = 0;

    virtual ~Complex() {
    
    }

};

#endif