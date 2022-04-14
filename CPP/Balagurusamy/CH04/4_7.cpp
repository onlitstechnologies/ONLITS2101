#include <iostream>

using namespace std;

double power(double m, int n = 2);      //Function with default argument

int main()
{
    cout << "5 raised to the power 2 is " << power(5) << endl;
    return 0;
}

double power(double m, int n)
{
    double res = 1;
    for (int i = 1; i <= n; i++)
    {
        res *= m; // res = res * m
    }
    return res;
}