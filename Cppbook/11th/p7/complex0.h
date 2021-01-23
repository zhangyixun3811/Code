#pragma once
#ifndef COMPLEX0_H_
#define COMPLEX0_H_
class complex
{
private:
    double m_real;
    double m_imag;
public:
    complex();
    complex(double real,double imag);
    complex operator+(complex c) const;
    complex operator-(complex c) const;
    complex operator*(complex c) const;
    complex operator*(double x) const;
    complex operator~() const;
    operator double();
    friend complex operator*(double x,complex c){return c * x;}
    friend ostream & operator<<(ostream & os,complex c);
    friend istream & operator>>(istream & is,complex &c);
};
#endif