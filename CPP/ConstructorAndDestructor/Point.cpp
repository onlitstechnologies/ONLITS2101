#include <iostream>

using namespace std;

class point
{
    float x;
    float y;

public:
    point();
    point(float x, float y);
    void getpoint(float x, float y);
    void putpoint();
    point add(point p);
};

point ::point()             //default constructor
{
    this->x = 0;
    this->y = 0; 
}

point ::point(float x, float y)     //parameterized constructor
{
    this->x = x;
    this->y = y;
}

void point ::getpoint(float x, float y)
{
    this->x = x; // assigning value from local variable to instance variable
    this->y = y;
}

void point ::putpoint()
{
    cout << "(" << x << ", " << y << ")" << endl;
}

point point ::add(point p)
{
    point sum;
    sum.x = this->x + p.x;
    sum.y = this->y + p.y;
    return sum;
}

int main()
{
    point p1 = point(3, 4); // Explicit initialization of object
    point p2(4, 5);         // Implicit initialization of object
    point p3;
    // p1.getpoint(3, 4);
    // p2.getpoint(4, 5);
    p3 = p1.add(p2);
    cout << "p1";
    p1.putpoint();
    cout << "p2";
    p2.putpoint();
    cout << "p3";
    p3.putpoint();
}