//////////////////////////////////////////////////////////////////////////////
// Number.cpp
// פאיכ נואכ³חאצ³¿ – נואכ³חאצ³ÿ לועמה³ג ךכאסף
#include "Number.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Number::Number() 
{
    value = 0;
}

Number::Number(double r = 0) 
{
    value = r;
}

Number::Number(const Number& r) 
{
    value = 0;
}

Number::~Number() 
{}

Number& Number::operator=(const Number& other) 
{
    if (this != &other) {
        value = other.value;
    }
    return *this;
}

double operator-(const Number& n, const Number& other)
{
    return n.value - other.value;
}

Number& Number::operator --()
{
    value--;
    return *this;
}

Number::operator string () const
{
    stringstream ss;
    ss << " Number = " << value << endl;
    return ss.str();
}

ostream& operator << (ostream& out, const Number& value)  
{
    out << string(value);
    return out;
}

istream& operator >> (istream& in, Number& r)  
{
    cout << " Number = "; in >> r.value;
    cout << endl;
    return in;
}
