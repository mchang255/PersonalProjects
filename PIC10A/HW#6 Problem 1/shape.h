/*
 PIC 10A Homework #6 Problem 1
 Goal: This file is the header file that contains the classes along with their functions and variables that will be used in the main.cpp
 
 Author: Miranda Chang
 Date 05/29/20
 */


#ifndef __SHAPE_H__
#define __SHAPE_H__

#include<iostream>
#include<assert.h>
using namespace std;

class Point
{
    public:
        Point(double x, double y); //constructor takes two numbers to be x and y coordinates of a point
    
        double get_x() const; //returning x-coordinate (private data)
        double get_y() const; //returning y-coordinate
        
    private:
        double x_position; //variables stored in Point class
        double y_position;
};

class Rectangle
{
    public:
        Rectangle(); //default constructor
        Rectangle(Point& x, double l, double w); //another constructor but with parameters
        
        void move(double h, double v); //shifting function
        double area(); //area function
        
        bool is_larger(Rectangle x) const; //comparing areas
        bool operator>(Rectangle x) const; //also comparing areas
    
    private:
        double x_coordinate; //variables stored in Rectangle class
        double y_coordinate;
        double length;
        double width;
        double Area;
};

#endif /* shape_h */
