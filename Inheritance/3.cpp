#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setData(void);
    int getData1(void);
    int getData2(void);
};

void Base::setData()
{
    data1 = 20;
    data2 = 30;
}

int Base::getData1()
{
    return data1;
}

int Base::getData2()
{
    return data2;
}

class Derived : private Base
{
    int data3;

public:
    void process(void);
    void display(void);
};

void Derived::process()
{
    setData();
    data3 = data2 * getData1();
}

void Derived::display()
{
    cout << "Value of data 1 is: " << getData1() << endl;
    cout << "Value of data 2 is: " << getData2() << endl;
    cout << "Value of data 3 is: " << data3 << endl;
}

int main()
{
    Derived o1;
    // o1.setData();
    o1.process();
    o1.display();
    return 0;
}