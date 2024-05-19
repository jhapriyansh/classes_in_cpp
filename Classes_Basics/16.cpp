#include <iostream>
using namespace std;

class bankDeposit
{
    int principal, years;
    float rate_of_interest, return_value;

public:
    // to prevent errors if we don't define value of object in the object declaration itself.
    bankDeposit() {}
    bankDeposit(int p, int y, float r);
    bankDeposit(int p, int y, int r);
    void show();
};

bankDeposit::bankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    rate_of_interest = r;
    return_value = principal;
    for (int i = 0; i < y; i++)
    {
        return_value *= (1 + r);
    }
}

bankDeposit::bankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    rate_of_interest = (float)r / 100;
    return_value = principal;
    for (int i = 0; i < y; i++)
    {
        return_value *= (1 + rate_of_interest);
    }
}

void bankDeposit::show()
{
    cout << "The principal amount was: " << principal << endl
         << "Amount after " << years << " years is: " << return_value << endl;
}

int main()
{
    bankDeposit bd1, bd2, bd3;
    int p, y, R;
    float r;

    cout << "Enter value for p, y and r: " << endl;
    cin >> p >> y >> r;
    bd1 = bankDeposit(p, y, r);
    bd1.show();

    cout << "Enter value for p, y and r: " << endl;
    cin >> p >> y >> R;
    bd2 = bankDeposit(p, y, R);
    bd2.show();

    bd3.show();
    return 0;
}