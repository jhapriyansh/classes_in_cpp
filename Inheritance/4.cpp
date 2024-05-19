#include <iostream>
using namespace std;

// multilevel inheritance.

class Student
{
protected:
    int rollNumber;

public:
    void setRoll(int);
    void getRoll(void);
};

void Student::setRoll(int a)
{
    rollNumber = a;
}

void Student::getRoll()
{
    cout << rollNumber << endl;
}

class Exam : public Student
{
protected:
    float maths, physics;

public:
    void setMarks(float, float);
    void getMarks(void);
};

void Exam::setMarks(float a, float b)
{
    maths = a;
    physics = b;
}

void Exam::getMarks()
{
    cout << "Marks in Maths: " << maths << endl
         << "Marks in Physics: " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        getRoll();
        getMarks();
        cout << "Your percentage is: " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    Result o1;
    o1.setRoll(69);
    o1.setMarks(91, 92.3);
    o1.display();
    return 0;
}