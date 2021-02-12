/*
 PIC 10A Homework #7 Problem 1
 Goal: Implementations for the Matrix class to be used in main.cpp
 
 Author: Miranda Chang
 Date: 06/05/20
 */

#include "Matrix.h"

/*
 Default constructor creates an empty matrix
 */
Matrix::Matrix()
{
	num_rows = 0;
	num_cols = 0;
}

/*
 Creating a matrix that has a set number of rows with random values generated in the matrix
 @param num_rows number of rows
 @param num_cols number of columns
 */
Matrix::Matrix(int new_num_rows, int new_num_cols)
{
    num_rows = new_num_rows;
    num_cols = new_num_cols;
    
    values.resize(num_rows); //vector of vectors. length num_rows long with each element being values for one row
    
    int value;
    for (int i = 0; i < num_rows; i++)
    {
         for (int j = 0; j < num_cols; j++)
           {
               value = rand()%(10);
               values[i].push_back(value); //adding value to matrix for certain row then column
           }
    }
    
}

/*
 Adding two matrices together if they have the same dimensions and outputting the resulting matrix. If not the same dimensions, an empty matrix is returned
 @param M2 the matrix you are adding with
 @return M3 the new matrix
 */
Matrix Matrix::operator+ (const Matrix& M2) const
{
    if (num_rows != M2.num_rows || num_cols != M2.num_cols) //if the dimensions aren't the same
    {
        cout << "Dimensions don't match!" << endl;
        return Matrix(); //returning an empty matrix
    }
    
    Matrix M3(num_rows, num_cols); //creating new matrix object
        

    for (int i = 0; i < num_rows; i++)
    {
        for (int j = 0; j < num_cols; j++)
        {
            M3.values[i][j] = values[i][j] + M2.values[i][j]; //adding the two matrices together and storing the values in M3
        }
    }
        
    return M3;
}

/*
 Printing the matrices into a file
 @param fout the file it is associated with
 */
void Matrix::print(ofstream &fout) const
{
    for(int i = 0; i < num_rows; i++)
    {
        for (int j = 0; j < num_cols; j++)
        {
            fout << values[i][j] << " "; //going by row by row and column by column printing the values out
        }
        fout << endl; //spacing the matrices out
    }
    fout << endl;
}
