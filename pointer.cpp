#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    cout << a << endl;
    cout << &a << endl;

    // creation of pointer
    int *ptr = &a;

    // accessing value of ptr
    cout << ptr << endl;
}