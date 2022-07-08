#include <iostream>
using namespace std;

int product(int a, int b)
{
    return a * b;
}

int main()
{
    int x, y;
    cout << "Enter the Numbers :" << endl;
    cin >> x >> y;
    int product2 = product(x, y);
    cout << "The Product is : " << product2 << endl;
    return 0;
}