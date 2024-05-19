#include <iostream>
#include <string>
using namespace std;
class Binary
{
private:
    // by default private
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void Binary::read()
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}
void Binary::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Format " << endl;
            exit(0);
        }
    }
}
void Binary::ones_compliment()
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    cout << "Compliment of binary taken" << endl;
}
void Binary::display()
{
    chk_bin();
    cout << "Displaying the binary number: ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    Binary b;
    b.read();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}