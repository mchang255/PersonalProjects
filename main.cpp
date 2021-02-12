#include "Point.h"

double Distance(Point p1, Point p2)
{
    return sqrt(pow(p1.getx() - p2.getx(), 2) + pow(p1.gety() - p2.gety(), 2));
}

int main()
{
    
    cout << "Hello World" << endl;
    
    Point number1(7,8);
    Point number2(9,0);
    
    cout << number1.distance(number2) << endl;
    
    cout << Distance(number1, number2) << endl;
    return 0;
}
