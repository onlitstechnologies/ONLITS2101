#include <iostream>
#include <cstring>

using namespace std;

class String {
private:
    char str[50];
public:
    void getdata(const char *m);
    int operator==(String s);
};

void String ::getdata(const char *m)
{
    cout << m;
    cin >> str;
}

int String ::operator==(String s)
{
    return strcmp(this->str, s.str);
}

int main()
{
    String s1, s2;
    s1.getdata("Enter a string: ");
    s2.getdata("Enter another string: ");
    if((s1 == s2)==0)
        cout << "The strings are same\n";
    else
        cout << "The strings are not same\n";
    return 0;
}