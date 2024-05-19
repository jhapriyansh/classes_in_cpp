#include <iostream>
using namespace std;

class A
{
    int a;

protected:
    int b;

public:
    int c;
    void getval()
    {
        a = 1;
        b = 2;
        c = 3;
    }
    int geta()
    {
        return a;
    }
};

class B : protected A
{
    int d;

protected:
    int e;

public:
    int f;
    void getval2()
    {
        d = 4;
        e = 5;
        f = 6;
    }
    int getd()
    {
        return d;
    }
};

class C : public B
{
    /*
    a ->    not inherited, private member of class A.
    b ->    inherited as protected member to B and then to C.
    c ->    inherited as protected member of B and then to C.
    getval ->inherited as protected member of B and then to C.
    geta ->inherited as protected member of B and then to C.
    d ->    not inherited, private member of clas B.
    e ->    inherited as a protected member to class C
    f ->    inherited publicaly to C
    getval2 ->inherited publicaly to C
    getd ->inherited publicaly to C
    g ->    class variable
    h ->    class variable
    getval3 ->class method
    display ->class method
    */
    int g;

public:
    int h;
    void getval3()
    {
        getval();
        g = 7;
        h = 8;
    }
    void display()
    {
        cout << geta() << endl;
        cout << b << endl;
        cout << c << endl;
        cout << getd() << endl;
        cout << e << endl;
        cout << f << endl;
        cout << g << endl;
        cout << h << endl;
    }
};

int main()
{
    C o1;
    o1.getval2();
    o1.getval3();
    o1.display();
    return 0;
}