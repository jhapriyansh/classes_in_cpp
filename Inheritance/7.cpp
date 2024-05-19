#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;

public:
    void setRoll(int roll)
    {
        this->roll = roll;
    }
    void getRoll()
    {
        cout << "Your roll number is: " << roll << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void setMarks(float maths, float physics)
    {
        this->maths = maths;
        this->physics = physics;
    }
    void getMarks()
    {
        cout << "Marks obtained in Maths: " << maths << endl
             << "Marks obtained in Physics: " << physics << endl;
    }
};

class Sports : public virtual Student
{
protected:
    float score;

public:
    void setScore(float score)
    {
        this->score = score;
    }
    void getScore(void)
    {
        cout << "Your PT score is: " << score << endl;
    }
};

class Result : public Sports, public Test
{
private:
    float total;

public:
    void display(void)
    {
        total = physics + maths + score;
        getRoll();
        getMarks();
        getScore();
        cout << "Your total is: " << total << endl;
    }
};

int main()
{
    Result o1;
    o1.setRoll(3);
    o1.setMarks(78, 89.3);
    o1.setScore(89.7);
    o1.display();
    return 0;
}