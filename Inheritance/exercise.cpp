#include <iostream>
#include <cmath>
using namespace std;

/*
    Create 2 classes
    1) Simple Calculator    => 2 number input using utility function and does + - * / and displays result using a function.
    2) Scientific Calculator=> 2 number input using utility function and does 4 scientific function of your choice.
    3) Create another class hybrid calculator and inherit it using these 2 classes.
    a) What type of inheritance are you using.
    b) What mode of inheritance are you using.
*/

class SimpleCalculator
{
    float a, b, result;

public:
    void setoperand(float a, float b)
    {
        this->a = a;
        this->b = b;
    }
    void add()
    {
        result = (a + b);
    }
    void subtract()
    {
        result = (a - b);
    }
    void multiply()
    {
        result = (a * b);
    }
    void divide()
    {
        result = (a / b);
    }
    void display()
    {
        cout << result << endl;
    }
};

class ScientificCalculator
{
    float a, result;

public:
    void set_a(int a)
    {
        this->a = a;
    }
    void view_sin()
    {
        result = sin(a);
    }
    void view_cos()
    {
        result = cos(a);
    }
    void view_tan()
    {
        result = tan(a);
    }
    void view_absoloute()
    {
        result = abs(a);
    }
    void display()
    {
        cout << result << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};

int main()
{
    HybridCalculator o1;
    o1.setoperand(2, 3);
    o1.add();
    o1.SimpleCalculator::display();
    o1.subtract();
    o1.SimpleCalculator::display();
    o1.multiply();
    o1.SimpleCalculator::display();
    o1.divide();
    o1.SimpleCalculator::display();
    o1.set_a(-4);
    o1.view_sin();
    o1.ScientificCalculator::display();
    o1.view_cos();
    o1.ScientificCalculator::display();
    o1.view_tan();
    o1.ScientificCalculator::display();
    o1.view_absoloute();
    o1.ScientificCalculator::display();
    return 0;
}