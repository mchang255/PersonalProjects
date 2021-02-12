/*
    PIC 10A Homework #3 Problem 1 largestFunc.cpp
    Goal: This program will find the integer from 1-99 that gives the function func(x) = cos(x) + sin(x) its largest value
 
    Author: Miranda Chang
    Date: 04/24/20
 
 */

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

/*
    Function below computes func(x) = cos(x) + sin(x) when an integer is inputted
    @param some_number an integer that is inputted into the equation
    @return the sum of cos(some_number) + sin(some_number)
 */

double largest_function_value(int some_number)
{
    double some_value = cos(some_number) + sin(some_number);
    return some_value;
}



int main() {
    
    srand(time(0)); //to make sure a different number is generated each time the code is run, we need to plant a seed here
    int r = 1 + rand() % 99; //random number is generated
    double temporary_max = largest_function_value(r); //random number from previous line is used in the function introduced earlier. that value calculated from the function is then stored in the variable temporary_max
    
    int i; //assigning data type to variable i
    int integer_that_works; //assigning data type to variable integer_that_works
    for(i = 1; i <= 99; ++i) //i represents integers 1-99 and the for loop will loop through the body until i is 99
    {
        double new_value = largest_function_value(i); //variable new_value stores the value of the function when whatever given value of i is inputted
        if(new_value >= temporary_max) //compares the value new_value to see if it's greater than the value temporary_max
        {
            temporary_max = new_value; //if greater, then temporary_max will take on the value that new_max has
            integer_that_works = i; //the variable integer_that_works will store the value of i that gave the function its greatest value and will continue to update until the function has reached its absolute maximum. program repeats this for loop until i is 99
        }
        
    }
    cout << "The integer " << integer_that_works << " has the largest function value " << temporary_max << "." << endl; //prints out the maximum value that the for loop stored as well as the integer that gave the function that value
    return 0;
}

