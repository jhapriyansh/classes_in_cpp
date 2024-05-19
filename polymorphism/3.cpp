#include <iostream>
using namespace std;

class shopItem
{
    int id;
    float price;

public:
    void setData(int id, float price)
    {
        this->id = id;
        this->price = price;
    }
    void getData()
    {
        cout << "Item id: " << id << ". Item price: " << price << ". " << endl;
    }
};

int main()
{
    shopItem *items = new shopItem[2];
    for (int i = 0; i < 2; i++)
    {
        int id;
        float price;
        cout << "Enter id of item: ";
        cin >> id;
        cout << "Enter price of item: ";
        cin >> price;
        items[i].setData(id, price);
        cout << "Data for item " << i + 1 << " set." << endl;
    }
    for (int i = 0; i < 2; i++)
    {
        cout<<"Item "<<i+1<<"..."<<endl;
        items[i].getData();
    }

    return 0;
}