#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setNum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend Complex sumComplex(Complex c1, Complex c2);
    void getNum(void)
    {
        cout << "Your number is: " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex c1, Complex c2)
{
    Complex c3;
    c3.setNum(c1.a + c2.a, c1.b + c2.b);
    return c3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNum(1, 4);
    c2.setNum(5, 8);
    c1.getNum();
    c2.getNum();
    sum = sumComplex(c1, c2);
    sum.getNum();
    return 0;
}

// Properties of friend function.
// Not in the scope of class.
// Not a class method.
// Can't be called by an object from the class.
// Can be invoked without the help of any object.
// Has access to private data of the class.
// Usually contains objects as arguements.
// Can be declared inside public/private section of the class (no change will be reflected).
// Can't access members directly by their names and needs object_name.member_name to access.