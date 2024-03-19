/////////////////////////////////////////////////////////////////////////////
// Source.cpp
// головний файл проекту – функція main
#include <iostream>
#include "Number.h"
using namespace std;

int main()
{
    Number a, b;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << endl;

    double c;
    c = a - b;
    cout << "a - b = " << c << endl;
    --a;
    cout << a;
    return 0;
}
