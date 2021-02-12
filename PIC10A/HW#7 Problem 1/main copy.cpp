#include "Matrix.h"
int main() 
{
	srand(0);
	Matrix A(3,5);
	Matrix B(3,5);
	Matrix C(3,5);
    Matrix D(1,1);
    
    D = A+D;
	C = A+B;
	
    ofstream fout;
	
	fout.open("out.txt");
	A.print(fout);
	B.print(fout);
	C.print(fout);
	D.print(fout);
	fout.close();

    return 0;
}

