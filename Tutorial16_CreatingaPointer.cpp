#include <iostream>
using namespace std;

int main()
{
    int moni = 100;
    int *pointer;
    pointer = &moni; // static pointer
    cout << pointer << endl;
    return 0;
}