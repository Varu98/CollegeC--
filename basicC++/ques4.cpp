// write a c++ program to ask for temperature in farenheit and display it in celsius

#include <iostream>
using namespace std;

int farenheit;

void calculate(int a)
{
    farenheit = (a - 32) * 5 / 9;

    cout << "The Temperature in Farenheit " << a << " To Celsius will be " << farenheit << endl;
}

int main()
{
    int num1;

    cout << "Input Temperature" << endl;
    cin >> num1;

    calculate(num1);

    return 0;
}
