#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int x)
    {
        base1int = x;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int x)
    {
        base2int = x;
    }
};

class Base3
{
protected:
    int base3int;

public:
    void set_base3int(int x)
    {
        base3int = x;
    }
};

class Derived : public Base1, public Base2, public Base3
{
    // base1int ->  protected
    // base1int ->  protected
    // set_b1i ->   public
    // set_b2i ->   public
public:
    void show()
    {
        cout << base1int << endl
             << base2int << endl
             << base3int << endl
             << "Sum is: " << base1int + base2int + base3int << endl;
    }
};

int main()
{
    Derived o1;
    o1.set_base1int(2);
    o1.set_base2int(4);
    o1.set_base3int(6);
    o1.show();
    return 0;
}