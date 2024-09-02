#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    cout << a << endl;
    cout << &a << endl;

    // creation of pointer
    int *ptr = &a;

    // accessing value of ptr(address)
    cout << ptr << endl;
    // printing the value of a by ptr
    cout << *ptr << endl;
    cout << &ptr << endl;
}