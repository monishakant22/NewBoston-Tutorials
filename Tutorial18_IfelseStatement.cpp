#include <iostream>
using namespace std;

int main()
{
    int answer;
    cout << "Age of Louis Tomlinson?" << endl;
    cin >> answer;
    if (answer == 29)
    {
        cout << "Your answer is CORRECT!" << endl;
    }
    else
    {
        cout << "Oops Try Again!" << endl;
    }
    return 0;
}