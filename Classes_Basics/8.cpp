#include <iostream>
using namespace std;

// Forward declaration of class promises compiler with the class.

class Complex;

class Calculator
{
public:

    // Forward declaration of function promises compiler with 2 complex class objects.

    int sumRealComplex(Complex, Complex);
    int sumImgComplex(Complex, Complex);
};

class Complex
{
    int a, b;

public:
    // Individual declaration of functions of another class.
    // friend int Calculator::sumRealComplex(Complex c1, Complex c2);
    // friend int Calculator::sumImgComplex(Complex c1, Complex c2);

    // Declaration of complete class.
    friend class Calculator;
    void setNum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void getNum(void)
    {
        cout << "Your number is: " << a << " + " << b << "i" << endl;
    }
};

// Actual declaration of function

int Calculator::sumRealComplex(Complex c1, Complex c2)
{
    return c1.a + c2.a;
}

int Calculator::sumImgComplex(Complex c1, Complex c2)
{
    return c1.b + c2.b;
}

int main()
{
    Complex c1, c2;
    c1.setNum(1, 2);
    c2.setNum(3, 4);
    Calculator x1;
    cout << x1.sumRealComplex(c1, c2) << endl;
    cout << x1.sumImgComplex(c1, c2);
    return 0;
}