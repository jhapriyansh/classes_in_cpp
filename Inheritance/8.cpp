#include <iostream>
using namespace std;

/*
Case 1:
class B:public A{

};
order of constructor execution -> A then B.

case 2:
class A:public B, public C{

}
order of constructor execution -> B then C then A.

case 3:
class A:public B, virtual public C{

}
order of constructor execution -> C then B then A.
*/

// The following program is about constructors in derived classes.

class Base1
{
    int data1;

public:
    Base1(int data1)
    {
        this->data1 = data1;
        cout << "Base1 class constructor called." << endl;
    }
    void getDataB1()
    {
        cout << "The value of data1 is: " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int data2)
    {
        this->data2 = data2;
        cout << "Base2 class constructor called." << endl;
    }
    void getDataB2()
    {
        cout << "The value of data2 is: " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called" << endl;
    }
    void getDataD()
    {
        cout << "The value of derived1 is: " << derived1 << endl
             << "The value of derived2 is: " << derived2 << endl;
    }
};

int main()
{
    Derived o1(1, 2, 3, 4);
    o1.getDataB1();
    o1.getDataB2();
    o1.getDataD();
    return 0;
}