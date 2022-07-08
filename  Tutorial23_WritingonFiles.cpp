#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myFile;
    myFile.open("First.txt");
    myFile << "Nice to meet yaa!! " << endl;
    myFile.close();
    return 0;
}
