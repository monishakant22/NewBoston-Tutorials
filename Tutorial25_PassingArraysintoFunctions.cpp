#include <iostream>
#include <fstream>
using namespace std;
int summation(int arr[], int num)
{
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int numbers[5];
    cin >> numbers[0];
    cin >> numbers[1];
    cin >> numbers[2];
    cin >> numbers[3];
    cin >> numbers[4];
    int total = summation(numbers, 5);
    cout << "Sum of all the elements in the array is : " << total << endl;
    return 0;
}
