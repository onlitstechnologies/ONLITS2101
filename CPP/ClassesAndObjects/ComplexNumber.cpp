#include <iostream>
using namespace std;

class complex
{
public:                 //violating encapsulation
    float real;
    float imaginary;    
};

int main()
{
    complex c1, c2, c3;
    cout << "Enter a complex number (r, i): ";
    cin >> c1.real >> c1.imaginary;
}