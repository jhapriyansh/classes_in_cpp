#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex(int real = 0, int imag = 0)
    {
        this->real = real;
        this->imag = imag;
    }
    void print()
    {
        cout << real << "+i" << imag << endl;
    }

    // Operator overloading

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    Complex operator-(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }
    friend ostream &operator<<(ostream &out, const Complex &c);
    friend istream &operator>>(istream &in, Complex &c);
};
istream &operator>>(istream &in, Complex &c)
{
    cout << "Enter real part: ";
    in >> c.real;
    cout << "Enter imaginary part: ";
    in >> c.imag;
    return in;
}

ostream &operator<<(ostream &out, const Complex &c)
{
    out << c.real;
    out << "+i" << c.imag << endl;
    return out;
}

int main()
{
    Complex o1(2, 3);
    Complex o2(5, 4);
    Complex o3;
    o3 = o1 - o2;
    Complex o4;
    o4 = o1 + o2 + o3;
    o4.print();
    cout << o4;
    Complex c5;
    cin>>c5;
    cout<<c5;
    return 0;
}