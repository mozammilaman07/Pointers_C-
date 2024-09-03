#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    cout << arr << endl;
    cout << arr[0] << endl;
    cout << &arr << endl;
    cout << &arr[0] << endl;
    cout << *arr << endl;
    cout << *arr + 1 << endl;
    cout << *(arr) + 1 << endl;
}