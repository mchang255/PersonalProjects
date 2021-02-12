/*
 PIC 10A Homework #6 Problem 1
 Goal: This file is the source file containing the implementations of the functions in shape.h to be used in main.cpp
 
 Author: Miranda Chang
 Date: 05/29/20
 */

#include"shape.h"

/*
    Default constructor that creates object in Point class.
    @param x x-coordinate
    @param y y-coordinate
 */
Point::Point(double x, double y)
{
    x_position = x;
    y_position = y;
}

/*
    Gets x-coordinate variable
    @return x-coordinate
 */
double Point::get_x() const
{
    return x_position;
}

/*
    Gets y-coordinate variable
    @return y-coordinate
 */
double Point::get_y() const
{
    return y_position;
}

/*
    Default constructor that creates object in Rectangle class. Sets length and width automatically to 1 each and centers the rectangle at (0,0)
 */
Rectangle::Rectangle()
{
    length = 1;
    width = 1;
    Point(0,0);
}

/*
    Creates object in Rectangle class
    @param x from Point class, coordinates
    @param l length
    @param w width
 */
Rectangle::Rectangle(Point& x, double l, double w)
{
    length = l;
    width = w;
    x_coordinate = x.get_x(); //using the get_x and get_y functions from the Point class to use those values of the coordinates in this function for Rectangle
    y_coordinate = x.get_y();
}

/*
    Shifts x and y coordinates of the rectangle
    @param h horizontal shift
    @param v vertical shift
 */
void Rectangle::move(double h, double v)
{
    x_coordinate = x_coordinate + h;
    y_coordinate = y_coordinate + v;
}

/*
    Calculates area using the given length and width of the rectangle
    @return area of rectangle
 */
double Rectangle::area()
{
    Area = length * width;
    return Area;
}

/*
    Compares which area is bigger among the two rectangles
    @param x the rectangle you are comparing against
    @return true if the area you have is bigger than x's
    @return false if the area you have is smaller or equal to x's
 */
bool Rectangle::is_larger(Rectangle x) const
{
    if (Area > x.Area)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*
    Overloading of operator>
    @param x the rectangle you are comparing against
    @return true if the rectangle you have has a bigger area than the other rectangle's
 */
bool Rectangle::operator>(Rectangle x) const
{
    if (Area > x.Area)
       {
           return true;
       }
       else
       {
           return false;
       }
}
