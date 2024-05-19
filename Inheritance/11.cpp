#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    void setData(int a, int b)
    {
        real = a;
        imag = b;
    }
    void getData()
    {
        cout << "The real part is: " << real << endl
             << "The imaginary part is: " << imag << endl;
    }
};

int main()
{
    // Complex o1;
    // Complex *ptr = &o1;
    // Complex *ptr = new Complex;
    // ptr->setData(2, 3);
    // ptr->getData();
    Complex *ptr = new Complex[3];
    ptr->setData(1, 4);
    (ptr + 1)->setData(2, 3);
    (ptr + 2)->setData(6, 5);
    ptr->getData();
    (ptr + 1)->getData();
    (ptr + 2)->getData();
    return 0;
}