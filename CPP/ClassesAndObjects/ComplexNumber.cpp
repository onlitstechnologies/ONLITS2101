#include <iostream>
using namespace std;

class complex
{
private:                 //violating encapsulation
    float real;
    float imaginary;
public:
    void getdata()
    {
        cout << "real: ";
        cin >> real;
        cout << "imaginary: ";
        cin >> imaginary;
    }

    complex sum(complex c)
    {
        complex t;
        t.real = real + c.real;
        t.imaginary = imaginary + c.imaginary;
        return t;
    }
    void putdata()
    {
        cout <<"real: " << real <<", imaginary: " << imaginary << endl;
    }
};

int main()
{
    complex c1, c2, c3;     //here c1, c2, c3
    cout << "Enter a complex number: " <<endl;
    c1.getdata();
    cout << "Enter another complex number: " << endl;
    c2.getdata();
    c3 = c1.sum(c2);
    cout << "c1: ";
    c1.putdata();
    cout << "c2: ";
    c2.putdata();
    cout << "c3 (sum): ";
    c3.putdata();
    return 0;
}