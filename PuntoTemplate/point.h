#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;
template <typename T>

class Point
{
public:
    Point():x(0),y(0){}
    Point(T xx, T yy):x(xx),y(yy){}
    T getX()
    {
        return x;
    }
    T getY()
    {
        return y;
    }
    void setX(T xx)
    {
        this->x=xx;
    }
    void setY(T yy)
    {
        this->y=yy;
    }
    void printPoint()
    {
        cout << this->getX() << ";" << this->getY() << endl;
    }
    Point operator +(Point pt)
    {
        Point tem;
        tem.x=x+pt.x;
        tem.y=y+pt.y;
        return tem;
    }

    Point operator -(Point pt)
    {
        Point tem;
        tem.x=x-pt.x;
        tem.y=y-pt.y;
        return tem;
    }
    friend ostream& operator << (ostream& output,Point& pt)
    {
        output << "punto=(" << pt.x<< ","<< pt.y << ")" << endl;
    }


private:
    T x,y;
};

#endif // POINT_H
