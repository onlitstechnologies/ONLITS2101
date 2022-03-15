#include <iostream>

using namespace std;

class vector
{
private:
    float v[5];

public:
    void create(); //(a)
    void modify(); //(b)
    void multiply(); //(c)
    void display(); //(d)
};

//:: -> scope resulution operator
void vector ::create()
{
    for (int i = 0; i < 5; i++)
    {
        v[i] = v[i - 1] + 10;
    }
}

void vector ::modify()
{
    int index;
    cout << "Enter index: ";
    cin >> index;
    cout << "Enter value: ";
    cin >> v[index];
    cout << "\nData modified" << endl;
}

void vector ::multiply()
{
    int scalar;
    cout << "Enter a scalar value: ";
    cin >> scalar;
    for(int i=0; i<5; i++)
    {
        v[i] *= scalar;         //v[i] = v[i] * scalar;
    }
}

void vector ::display()
{
    cout << "The vector is: " << endl;
    cout << "(";
    for (int i = 0; i < 4; i++)
    {
        cout << v[i] << ", ";
    }
    cout << v[4] << ")" << endl;
}

int main()
{
    vector v;
    v.create();
    v.display();
    v.modify();
    v.display();
    v.multiply();
    v.display();
    return 0;
}