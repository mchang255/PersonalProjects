/*
    PIC 10A Homework #1, triangle.cpp
    Purpose: outputs "Hello Triangle!" followed by a line of stars, followed by a triangle made out of backward and forward slashes
 
    Author: Miranda Chang
    Date: 04/11/20
 */

#include <iostream>
using namespace std;

int main() {
    cout << "\"Hello Triangle!\"" << endl; //Prints "Hello Triangle!" and then creates a new line
    cout << "********" << endl; //Prints eight *'s in a single line, then a new line
    cout << " \\    /" << endl; //Prints a space in front, then \   /, then a new line
    cout << "  \\  /" << endl; // Prints two spaces in front then \ /, then a new line
    cout << "   \\/" << endl; //Prints three spaces in front then \/, then a new line
    return 0;
}
