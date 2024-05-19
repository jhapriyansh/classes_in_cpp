#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    Complex()
    {
        a = 0;
        b = 0;
    }
    void getData()
    {
        cout << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1(2, 3);
    c1.getData();
    Complex c2(3);
    c2.getData();
    Complex c3;
    c3.getData();
    return 0;
}