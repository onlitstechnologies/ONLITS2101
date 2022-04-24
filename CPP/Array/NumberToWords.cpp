#include <iostream>

using namespace std;

int main()
{
    int n;
    char numbers[][6] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout << "Enter a number: ";
    cin >> n;
    if (n >= 1 && n <= 9)
        cout << numbers[n] << endl;
    else
        cout << "Invalid input" << endl;
    return 0;
}