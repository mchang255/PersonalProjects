/*
    PIC 10A Homework 1, product.cpp
    Purpose: asks user to input two numbers, calculates the products of the two numbers, and then prints out the product
 
    Author:  Miranda Chang
    Date: 04/11/20
 */

#include <iostream>
using namespace std;

int main() {
    cout << "Input two integers (0 - 100):" << endl; //Asks user to input two integers
    
    int number_one; //Defines variable number_one
    cin >> number_one; //User inputs the first number, which is then stored into the variable
    
    int number_two; //Defines variable number_two
    cin >> number_two; //User inputs the second number, which is then stored into the variable
    
    int product = number_one * number_two; //Defines variable product, which stores the value of the two numbers' product
    cout << "The product of two integers is " << product << "." << endl; //Outputs product
    return 0;
}
