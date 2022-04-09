#include <iostream>

using namespace std;

class point
{
    float x;
    float y;

public:
    void getpoint(float x, float y);
    void putpoint();
    point add(point p);
};

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
    point p1, p2, p3;
    p1.getpoint(3, 4);
    p2.getpoint(4, 5);
    p3 = p1.add(p2);
    cout << "p1";
    p1.putpoint();
    cout << "p2";
    p2.putpoint();
    cout << "p3";
    p3.putpoint();
}