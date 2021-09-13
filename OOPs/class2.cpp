#include <iostream>
using namespace std;

class person
{
    int age;
    char name[30];

public:
    void getData();
    void display();
};
// add new comment
void person::getData()
{
    cout << "Enter Your Name ";
    cin >> name;
    cout << "Enter Your Age ";
    cin >> age;
}

void person::display()
{
    cout << "\n Name is " << name << endl;
    cout << "\n age is " << age << endl;
}

int main()
{
    person p;
    p.getData();
    p.display();

    return 0;
}