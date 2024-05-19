#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int id)
    {
        this->id = id;
        salary = 34;
    }
    Employee() {}
};

// Derived Class
// class derived name: visibility mode base class
// visibility -> public / private.
// default visibility mode is private.
// you want the public attributes of base class to be inherited publically or privately.
// you can't inherit private members of base class.

class Programmer : Employee
{
    int languageCode;

public:
    Programmer(int id)
    {
        this->id = id;
        languageCode = 9;
    }
    void getData()
    {
        cout << id;
    }
};

int main()
{
    Employee e1(2), e2(3);
    cout << e1.id << endl;
    cout << e1.salary << endl;
    Programmer p1(1);
    p1.getData();
    return 0;
}