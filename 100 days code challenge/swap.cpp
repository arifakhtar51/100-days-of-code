#include<iostream>
using namespace std;

void swapTwo(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main()
{
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Before swapping: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swapTwo(a, b);

    cout << "After swapping: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
