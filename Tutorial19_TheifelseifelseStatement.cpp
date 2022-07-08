#include <iostream>
using namespace std;

int main()
{
    int answer;
    cout << "Age of Louis Tomlinson?" << endl;
    cin >> answer;
    {
        if (answer > 29)
        {
            cout << "Too high" << endl;
        }
        else if (answer < 29)
        {
            cout << "Too Low!" << endl;
        }
        else
        {
            cout << "You are CORRECT!" << endl;
        }
        return 0;
    }
}