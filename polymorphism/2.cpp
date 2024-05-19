#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
    void setData(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
};

int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;
    // c1.setData(4,6);
    // c1.getData();
    ptr->setData(4, 6);
    ptr->getData();
    return 0;
}