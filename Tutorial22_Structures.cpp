#include <iostream>
using namespace std;
struct Test
{
    char name[20];
    int age; /* data */
};

int main()
{
    Test Moni =
        {
            "Moni",
            20};
    cout << Moni.name << endl;
    cout << Moni.age << endl;
    return 0;
}