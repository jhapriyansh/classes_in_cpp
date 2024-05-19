#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter id of employee: ";
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of this employee is: " << id << endl;
        cout << "The salary of this employee is: " << salary << endl;
    }
};



int main()
{
    Employee test[4];
    for (int i = 0; i < 4; i++)
    {
        test[i].setId();
    }
    for (int i = 0; i < 4; i++)
    {
        test[i].getId();
    }
    return 0;
}