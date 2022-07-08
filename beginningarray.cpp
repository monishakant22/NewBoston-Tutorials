#include <iostream>
using namespace std;

int main()
{
    int ages[3];
    cin >> ages[0];
    cin >> ages[1];
    cin >> ages[2];
    int sum = ages[0] + ages[1] + ages[2];
    cout << sum << endl;
    return 0;
}