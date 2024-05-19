#include <iostream>
using namespace std;

class baseClass
{
public:
    int varBase;
    virtual void display()
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
    baseClassPointer = &objDeri;
    baseClassPointer->display();
    return 0;
}