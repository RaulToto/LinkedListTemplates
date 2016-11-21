#include "point.h"
#include <iostream>
int main()
{
    Point<int> a(3,2);
    Point<int> b(5,4);
    Point<int> c;
    c=a+b;
    cout<< c;
    c=a-b;
    cout << c;
}
