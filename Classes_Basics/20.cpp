#include <iostream>
using namespace std;

class demo
{

    int data1, data2, *p;

public:
    demo()
    {
        p = new int;
    }

    demo(demo &d){
        data1 = d.data1;
        data2 = d.data2;
        *p = *(d.p);
    }

    void getData(int a, int b, int c)
    {
        data1 = a;
        data2 = b;
        *p = c;
    }
    
    void show()
    {
        cout << data1 << " " << data2 << " " << *p << endl;
    }
};

int main()
{
    demo obj1;
    obj1.getData(10, 20, 30);
    obj1.show();
    demo obj2 = obj1;
    obj2.getData(11, 21, 40);
    obj2.show();
    return 0;
}