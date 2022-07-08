#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double power;
    double num1, num2;
    cin >> num1 >> num2;
    power = pow(num1, num2);
    int random = rand();
    cout << power << endl;
    cout << random << endl;
    return 0;
}
