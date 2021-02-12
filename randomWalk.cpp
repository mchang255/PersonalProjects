/*
    PIC 10A Homework #3 Problem 2
    Goal: We have a robot starting at the position (0,0) in a [-5,5] x [-5,5] grid. The program makes the robot move one step at a time in any of the four directions randomly: up, down, left, or right. As the robot moves, it prints out the direction along with its current position. The program stops when either the robot returns to its startinig position (0,0) or it hits the boundary, which is anywhere where its x-coordinate or y-coordinate is 5 or -5.
 
    Author: Miranda Chang
    Date: 04/24/20
 */


#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int x_position = 0; //setting the x-coordinate to be zero, as part of its initial position
    int y_position = 0; //setting the y-coordinate to be zero, as part of its initial position
    
    srand(time(0)); //plant a seed for random number (really direction) generator following. This is to make sure that a different number is generated each time the program is run
    
    do{
        int random_direction = 1 + rand() % 4; //to generate a random direction for the robot to walk in, we give each of the four directions an integer from 1-4. The generator will choose a random number that will correspond to one of the four directions
    
        switch(random_direction)
        {
            case 1: //if the random number is one, then the robot will move up
                y_position = y_position + 1; //moving up makes its y-coordinate go up positively by one
                cout << setw(10) << left << "Up"; //direction is printed as "Up" with empty spaces following
                break;
            case 2: //if the random number is two, then the robot will move down
                y_position = y_position - 1; //moving down makes its y-coordinate go down negatively by one
                cout << setw(10) << left << "Down"; //direction is printed as "Down" with empty spaces following
                break;
            case 3: //if the random number is three, then the robot will move to the left
                x_position = x_position - 1; //moving to the left makes its x-coordinate go down by one
                cout << setw(10) << left << "Left"; //direction is printed as "Left" with empty spaces following
                break;
            case 4: //if the random number is four, then the robot will move to the right
                x_position = x_position + 1; //moving to the right makes its x-coordinate go up by one
                cout << setw(10) << left << "Right"; //direction is printed as "Right" with empty spaces following
                break;
        }
        
        cout << right << "(" << x_position << "," << y_position << ")" << endl; //after the direction is chosen and coordinates have changed, current position of robot is printed spaces after the direction on the same line as (x,y)
        
        if(x_position == 0 && y_position == 0) //if the position of the robot happens to be (0,0)
        {
        cout << "Back to the origin!" << endl; //Back to the origin is printed
        }
        if((x_position == 5 || y_position == 5) || (x_position == -5 || y_position == -5)) //if the position of the robot happens to be anywhere on the boundary, so either its x or y-coordinate is 5 or -5
        {
        cout << "Hit the boundary!" << endl; //Hit the boundary is printed
        }
        
    }while(!(x_position == 5 || y_position == 5 || x_position == -5 || y_position == -5) && !(x_position == 0 && y_position == 0)); //Loops back to the code under the do part until the condition is no longer true. The condition right now is that the robot must have a position that is either NOT on the boundary and NOT at the origin.
    return 0;
}
