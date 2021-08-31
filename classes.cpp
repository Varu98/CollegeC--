#include <iostream>
using std::string;

class employee
{
public:
    string name;
    string college;
    int percentage;

    void introduceYourself()
    {
        std::cout << "Name _ " << name << std::endl;
        std::cout << "College _ " << college << std::endl;
        std::cout << "Percentage _ " << percentage << std::endl;
    }
};

int main()
{
    employee employee1;
    employee1.name = "varu";
    employee1.college = "glbim";
    employee1.percentage = 60;
    employee1.introduceYourself();

    return 0;
}