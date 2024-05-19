#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "ID is: " << id << endl
             << "Price is: " << price << endl;
    }
};

int main()
{
    int size = 3;
    Shop *ptr = new Shop[size];
    for (int i = 0; i < size; i++)
    {
        (ptr + i)->setData(i + 1, 123.45 - (i * i + 4));
    }
    for (int i = 0; i < size; i++)
    {
        (ptr + i)->getData();
    }
    return 0;
}