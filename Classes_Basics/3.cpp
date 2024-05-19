#include <iostream>
using namespace std;

class Shop
{
    int item_id[100];
    int item_price[100];
    int counter;

public:
    void initCounter(void)
    {
        counter = 0;
    }
    void setPrice(void);
    void displayPrice(void);
};

void Shop::setPrice(void)
{
    cout << "Enter id of your item number " << counter + 1 << endl;
    cin >> item_id[counter];
    cout << "Enter price of your item" << endl;
    cin >> item_price[counter];
    counter++;
}
void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id " << item_id[i] << " is " << item_price[i] << endl;
    }
}

int main()
{
    Shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();
    return 0;
}