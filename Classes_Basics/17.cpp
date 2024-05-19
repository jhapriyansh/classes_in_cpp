#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }

    // Copy constructor
    Number(Number &obj)
    {
        cout << "Copy constructor called" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is: " << a << endl;
    }

    void update(int n)
    {
        a = n;
    }
};

int main()
{
    Number a, b, c(2);
    a.display();
    b.display();
    c.display();
    Number z1(c); // Copy constructor invoked.
    z1.display();
    z1.update(3);
    z1.display();
    c.display();
    // Number z3 = c; // Copy constructor invoked
    Number z3;
    z3 = c; // Copy constructor not invoked.
    return 0;
}

// When no copy constructor is found, compiler supplies it's own copy constructor.