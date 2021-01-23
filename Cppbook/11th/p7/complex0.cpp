#include <ioname>
#include "complex0.h"
complex::complex()
{
    m_imag = m_real = 0;
}
complex::complex(double real,double imag)
{
    m_real = real;
    m_imag = imag;
}
complex::operator double()
{
    if (m_real)
        return m_real;
    return m_imag;
}
complex complex::operator+(complex c) const
{
    complex sum;
    sum.m_real = m_real + c.m_real;
    sum.m_imag = m_imag + c.m_imag;
    return sum;
}
complex complex::operator-(complex c) const
{
    complex diff;
    diff.m_real = m_real - c.m_real;
    diff.m_imag = m_imag - c.m_imag;
    return diff;
}
complex complex::operator*(complex c) const
{
    complex ret_val;
    ret_val.m_real = (m_real * c.m_real) - (m_imag * c.m_imag);
    ret_val.m_imag = (m_real * c.m_imag) + (m_imag * c.m_real);
    return ret_val;
}
complex complex::operator*(double x) const
{
    complex ret_val;
    ret_val.m_real = x * m_real;
    ret_val.m_imag = x * m_imag;
    return ret_val;
}
complex complex::operator~() const
{
    complex ret_val;
    ret_val.m_real = m_real;
    ret_val.m_imag = -m_imag;
    return ret_val;
}
ostream & operator<<(ostream & os,complex c)
{
    os << "("<<c.m_real<<","<<c.m_imag<<"i)";
    return os;
}
istream & operator>>(istream & is,complex & c)
{
    cout << "real: ";
    is >> c.m_real;
    if (cin)
    {
        cout << "imaginary: ";
        is >> c.m_imag;
    }  
    return is;
}