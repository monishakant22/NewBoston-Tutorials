#include <iostream>
using namespace std;

void MyFavoriteNumber(int a)
{
    cout << "My Favorite Number is : " << a << endl;
}

int main()
{
    int b;
    cin >> b;
    MyFavoriteNumber(b);
    return 0;
}