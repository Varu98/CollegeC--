// Write a program to read two numbers from keyboard and display the larger value on the screen.

#include <iostream>
using namespace std;

void compare(int a, int b)
{
    if (a > b)
    {
        cout << a << " Is greater Than " << b << endl;
    }
    if (b > a)
    {
        cout << b << " Is greater Than " << a << endl;
    }
}

int main()
{
    int num1, num2;

    cout << "Input Two Numbers" << endl;
    cin >> num1 >> num2;

    compare(num1, num2);

    return 0;
}
