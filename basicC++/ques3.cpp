// Write a program to read the value of a, b and c and display the value of x, where:
// x = a / b - c

#include <iostream>
using namespace std;

int x;

void calculate(int a, int b, int c)
{
    x = a / b - c;
    cout << "The value of x =>\n"
         << x << " = " << a << " / " << b << "- " << c << endl;
}

int main()
{
    int num1, num2, num3;

    cout << "Input Three Numbers" << endl;
    cin >> num1 >> num2 >> num3;

    calculate(num1, num2, num3);

    return 0;
}
