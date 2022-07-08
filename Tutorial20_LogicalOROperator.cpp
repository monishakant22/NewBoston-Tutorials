#include <iostream>
using namespace std;

int main()
{
    cout << "Do you think Harry Styles is Hot? (y/n)" << endl;
    char answer;
    cin >> answer;
    if (answer == 'y' || answer == 'Y')
    {
        cout << "Nice choice!" << endl;
    }
    else if (answer == 'n' || answer == 'N')
    {
        cout << "Get a life bro!" << endl;
    }
    else
    {
        cout << "Enter the correct option idiot!" << endl;
    }
    return 0;
}