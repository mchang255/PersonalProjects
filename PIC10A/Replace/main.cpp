#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void replace(ifstream& file1, ofstream& file2)
{
    string s = "AAA";
    char c;
    while (file1.get(c))
    {
        if (c >= '0' && c <= '9')
        {
            while (c >= '0' && c <= '9')
            {
                file1.get(c);
            }
            file2 << s;
        }
        file2 << c;
        
    }
}

int main() {

    ifstream fin; fin.open("original.txt");
    ofstream fout; fout.open("filtered.txt");
    if(fout.fail() || fin.fail())
    {
        cout << "Error opening the file \n";
        return -1;
    }
    replace(fin, fout);
    fin.close(); fout.close();
    return 0;
}
