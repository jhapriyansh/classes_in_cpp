#include <iostream>
using namespace std;

class y;

class x
{
    int data;
    friend void add(x, y);

public:
    void setData(int value)
    {
        data = value;
    }
};

class y
{
    int data;
    friend void add(x, y);

public:
    void setData(int value)
    {
        data = value;
    }
};

void add(x o1, y o2)
{
    cout << "Summing datas of x and y objects gives: " << o1.data + o2.data;
}

int main()
{
    x a;
    y b;
    a.setData(14);
    b.setData(15);
    add(a,b);
    return 0;
}