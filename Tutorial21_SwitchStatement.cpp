#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "How many legs do you have?" << endl;
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "You are a Zombie!" << endl;
        break;
    case 2:
        cout << "You are Human!" << endl;
        break;
    case 4:
        cout << "You are a Cow!" << endl;
        break;
    default:
        cout << "Idk what you are...!" << endl;
    }
    return 0;
}