//////////////////////////////////////////////////////////////////////////////
// Number.h
// заголовний файл Ц визначенн€ класу
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Number
{
private:
    double value;

public:
    Number();
    Number(double);
    Number(const Number&);
    ~Number();
    double GetValue() const;
    void SetValue(double);
    Number& operator=(const Number&);
    friend double operator-(const Number&, const Number&);
    Number& operator --();
    operator string() const;
    friend ostream& operator<<(ostream&, const Number&);
    friend istream& operator>>(istream&, Number&);
};