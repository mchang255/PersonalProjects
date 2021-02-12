#include<iostream>
#include"shape.h"

using namespace std;

int main()
{
    // construct a point at position (1,1)
    // constuctor of class "Point" is called
    Point p(1,1); 

    // construct two rectangles using different parameters
    Rectangle r1; //r1 is initialized of size 1X1 at the origin 
    Rectangle r2(p,0.3,2.9);
    
    // move rectangle r1
    // shift the rectangle horizontally by 0.2
    // shift the rectangle vertically by -1.3
    r1.move(0.2,-1.3);
    
    // compute the areas using member function .area()
    cout << r1.area() << endl;
    cout << r2.area() << endl;
   
    // compare whether r1 has a larger area than r2?
    cout << r1.is_larger(r2) << endl;

    // overloading the member function .is_larger() with >
    cout << (r1 > r1) << endl;
    cout << (r1 > r2) << endl;

    return 0;
}
