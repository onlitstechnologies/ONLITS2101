#include <iostream>

using namespace std;

class B
{
    int a; // private; not inheritable
public:
    int b;
    void get_ab();
    int get_a(void);
    void show_a(void);
};

class D : public B
{
    int c;

public:
    void mul(void);
    void display(void);
};

void B::get_ab(void)
{
    a = 5;
    b = 10;
}

void B::show_a(void)
{
    cout << "a = " << a << endl;
}

void D :: mul()
{
    c = b * get_a();
}

void D :: display()
{
    cout << "a = " << get_a() << endl;
    cout << "b = " << b << endl;
    cout << "c =" << c << endl << endl;
}

int main()
{
    D d;
    d.get_ab();
    d.mul();
    d.show_a();
    d.display();

    d.b = 20;
    d.mul();
    d.display();

    return 0;

}