/*
    PIC 10A Homework #2, myString.cpp
    Goal: User inputs a string. The program outputs the string, the length, the first 5 characters, the last 5 characters, and the word after deleting the last 5 characters.
 
    Author: Miranda Chang
    Date: 04/19/20
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Type a long word: " << endl; //asks user to input a word
    string word; //variable created to store the word inputted
    getline(cin, word); //all the keystrokes read until Enter key is pressed and then word is stored in the string variable
    
    cout << "The word you just enter is: " + word << endl; //outputs word inputted
    cout << "The length of your word is: " << word.length() << endl; //outputs length of word
    cout << "The first 5 characters of your word is: " + word.substr(0,5) << endl; //starts with first character and ends when string length is 5 characters long. Substring is outputted
    cout << "The last 5 characters of your word is: " + word.substr(word.length()-5, 5) << endl; //To get last 5 characters, length of word is subtracted by 5 to get the starting position of the substring and ends when string length is 5 characters long (to the end of string). Substring is outputted
    cout << "The word after deleting last 5 characters is: " + word.erase(word.length()-5, 5) << endl; //To delete last 5 characters, length of word is subtracted by 5 to get the starting position of the substring and the function erases the characters following until it has erased 5 characters total. The remaining part of the string is then outputted.
    return 0;
}
