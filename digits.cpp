/*
 PIC 10A Homework #2, digits.cpp
    Purpose: outputs Asks user to input an integer 10-99 and then calculates the product of the digits as well as the division of the second digit by the first digit.
 
    Author: Miranda Chang
    Date: 04/19/20
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Input an integer (10 - 99):" << endl; //asks user to input an integer
    
    int number; //variable created to store integer inputted
    cin >> number; //user inputs integer
    
    int tens_digit = number / 10; //divide integer by 10 and store it as an int type to just get the digit before the decimal
    int ones_digit = number % 10; //the remainder after dividing the integer by 10 is the one's place. Store as int type to just get that digit
    int product = tens_digit * ones_digit; //multiply the ten's place and the one's place to get product
    double new_product = static_cast<double>(product); //cast to a floating-point number to get decimal places
    
    cout << fixed << setprecision(4); //sets precision to be 4 digits after decimal point for all the following floating-point numbers
    cout << "The product of digits is " << new_product << endl; //outputs the product
    
    double new_tens_digit = static_cast<double>(tens_digit); //casts tens_digit to be a floating-point number
    double new_ones_digit = static_cast<double>(ones_digit); //casts ones_digit to be a floating-point number
    double quotient = new_ones_digit / new_tens_digit; //divides the one's place by the ten's place. Stored as a double type to get decimal places
    
    cout << "The division of digits is " << quotient << endl; //outputs quotient
    
    return 0;
}
