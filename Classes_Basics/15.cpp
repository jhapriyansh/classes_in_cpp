#include <iostream>
using namespace std;

class Simple
{
    int data1, data2;

public:
    Simple(int a, int b = 9)
    {
        data1 = a;
        data2 = b;
    }
    void getData()
    {
        cout << data1 << " " << data2 << endl;
    }
};

int main()
{
    Simple s(2);
    s.getData();
    return 0;
}