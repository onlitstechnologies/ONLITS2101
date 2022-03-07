#include <iostream>
#include <cstring>
using namespace std;

class bank_account
{
    char depositor[50];
    char acno[10];
    char actype[10];
    float balance;
public:
    void init();
    void deposit();
    void withdraw();
    void display_balance();
};

void bank_account :: init()
{
    strcpy(depositor, "Himanshu Kumar");
    strcpy(acno, "56987458");
    strcpy(actype, "SA");
    balance = 10000.00F;
}

void bank_account :: deposit()
{
    float amount;
    cout <<"\nEnter amount: ";
    cin >> amount;
}

void bank_account :: withdraw()
{


}

void bank_account :: display_balance()
{
    cout<<"\nName: " << depositor << endl;
    cout<<"Balance: " << balance << endl;
}

int main()
{
    bank_account bacc;
    bacc.init();
    bacc.display_balance();
    bacc.deposit();
    bacc.display_balance();
    return 0;
}