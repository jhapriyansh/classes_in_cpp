// Polymorphism
// 1) Compile Time Polymorphism
// 2) Run Time Polymorphism

// Compile Time Polymorphism
// 1) Function Overloading
// 2) Operator Overloading

// Runtime Polymorphism
// 1) Virtual Functions

// Pointers to derived class.

#include <iostream>
using namespace std;

class baseClass
{
public:
    int varBase;
    void display()
    {
        cout << "Displaying base class variable varBase: " << varBase << endl;
    }
};
class derivedClass : public baseClass
{
public:
    int varDeri;
    void display()
    {
        cout << "Displaying base class variable varBase: " << varBase << endl;
        cout << "Displaying derived class variable varDeri: " << varDeri << endl;
    }
};

int main()
{
    baseClass *baseClassPointer;
    baseClass objBase;
    derivedClass objDeri;
    baseClassPointer = &objDeri; // Pointing base class pointer to derived class.
    baseClassPointer->varBase = 34;
    baseClassPointer->display();
    derivedClass *derivedClassPointer;
    derivedClassPointer = &objDeri;
    derivedClassPointer->varBase = 9448;
    derivedClassPointer->varDeri = 98;
    derivedClassPointer->display();
    return 0;
}