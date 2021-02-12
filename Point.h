

#ifndef Point_h
#define Point_h

#include <cmath>
#include <iostream>
using namespace std;

class Point
{
public:
    Point(){x=0; y=0;};
    Point(double dx, double dy){x=dx; y=dy;};
    double distance (const Point &p) const;
    double getx() const {return x;};
    double gety() const {return y;};
    
private:
    double x;
    double y;
};

#endif /* Point_hpp */
