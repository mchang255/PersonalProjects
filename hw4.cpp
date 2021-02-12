/*
    PIC 10A Homework #4 Problem 1
    Goal: User enters three integers. They then have three options to choose from. One, the program outputs the largest integer out of the three. Two, they get the next permutation, which is when the last digit moves up to become the first digit. Three, they have the integers sorted from lowest to highest. After every selection, the user is either allowed to choose again from the menu of options or end the process by pressing Q.
 
    Author: Miranda Chang
    Date: 5/9/20
 */

#include <iostream>
using namespace std;

/*
    Prints the menu of options for the user to choose along with their descriptions.
    @param none
 */
void displayMenu()
{
    cout << "==============MENU================" << endl;
    cout << "1. Output the largest" << endl;
    cout << "2. Get the next permutation" << endl;
    cout << "3. Sort in ascending order" << endl;
}

/*
    Displays the largest number of the three integers inputted.
    @param a first integer
    @param b second integer
    @param c third integer
    @return the largest number among the three
 */
int largest(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        cout << "The largest number among the three is: " << a << endl << endl;
        return a;
    }
    else if (b >= c)
    {
        cout << "The largest number among the three is: " << b << endl << endl;
        return b;
    }
    else
    {
        cout << "The largest number among the three is: " << c << endl << endl;
        return c;
    }
}

/*
    Displays the integers from lowest to highest. Also changes the numbers stored in the variables.
    @param a first integer
    @param b second integer
    @param c third integer
 */
void mySort(int& a, int& b, int& c)
{
    int placeholder;
    cout << "After sorting: ";
    
    if (a >= b && a >= c)
    {
        if (b >= c)
        {
            placeholder = c;
            c = a;
            a = placeholder;
        }
        else
        {
            placeholder = b;
            b = c;
            c = a;
            a = placeholder;
        }
        cout << a << " " << b << " " << c << endl << endl;
    }
    else if (a >= b && a <= c)
    {
        placeholder = b;
        b = a;
        a = placeholder;
        cout << a << " " << b << " " << c << endl << endl;
    }
    else if (a <= b && a <= c)
    {
        if (b >= c)
        {
            placeholder = b;
            b = c;
            c = placeholder;
        }
        cout << a << " " << b << " " << c << endl << endl;
    }
    else if (a <= b && a >= c)
    {
        placeholder = b;
        b = a;
        a = c;
        c = placeholder;
        cout <<  a << " " << b << " " << c << endl << endl;
    }

}

/*
    Rearranges the numbers displayed to have the last number of the previous sequence to be the first number. The variables store different numbers after running this procedure as well.
    @param a first integer
    @param b second integer
    @param c third integer
 */
void myPermutation(int& a, int& b, int& c)
{
    int dummy;
    dummy = a;
    a = c;
    c = b;
    b = dummy;
    cout << "After one permutation: " << a << " " << b << " " << c << endl << endl;
    
}

int main()
{
    cout << "Enter your three integer numbers:" << endl;
    int one; //first integer variable defined
    int two; //second integer variable defined
    int three; // third integer variable defined
    cin >> one; //inputting the first number to be stored in the first integer variable
    cin >> two; //inputting the second number to be stored in the second integer variable
    cin >> three; //inputting the third number to be stored in the third integer variable
    
    
    bool loop = true; //condition for the while loop below. It is always true as long as the while loop is running.
    
    
    while (loop)
    {
        char input; //defining variable input as char. We choose char because we need a data type that stores both numbers and letters.
        displayMenu(); //calls the displayMenu procedure to display the choices to the user
        cout << "Enter your choice (1 - 3), Q to quit: "; //asks user to input a choice
        cin >> input; //right after the statement on the same line, the user inputs their choice. That means picking a number one through three corresponding with the choices from displayMenu(). Whatever the user chooses is stored in input.
        cout << endl;
        
        if (input == '1') //if the user picks 1, they will ask for the largest number to be displayed. The largest() function will run.
        {
            largest(one, two, three);
        }
        else if (input == '2') //if the user picks 2, they will ask for the next permutation. The myPermutation() function will run.
        {
            myPermutation(one, two, three);
        }
        else if (input == '3') //if the user picks 3, they will ask for the numbers to be arranged from lowest to highest. The mySort() function will run.
        {
            mySort(one, two, three);
        }
        else if (input == 'Q') //if Q is entered, they are asking to exit the menu, and that will cause the loop to become false and not run.
        {
            cout << "Exit the menu" << endl;
            loop = false;
        }
    }
    
    return 0;
}
