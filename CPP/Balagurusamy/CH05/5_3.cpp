#include <iostream>
#include <cstring>
#include <cstdlib>

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

void bank_account ::init()
{
    cout << "Enter Depositor Name: ";
    cin.getline(depositor, 50);
    cout << "Enter Account Number: ";
    cin >> acno;
    cout << "Enter Account Type: ";
    cin >> actype;
    cout << "Enter Account Balance: ";
    cin >> balance;
    cin.get();
}

void bank_account ::deposit()
{
    float amount;
    cout << "\nEnter amount to deposit: ";
    cin >> amount;
    balance += amount;
}

void bank_account ::withdraw()
{
    float amount;
    cout << "\nEnter amount to withdraw: ";
    cin >> amount;
    if (amount <= balance)
        balance -= amount;
    else
        cout << "Transaction declined - insufficient balance" << endl;
}

void bank_account ::display_balance()
{
    cout << "\nName: " << depositor << endl;
    cout << "Balance: " << balance << endl << endl;
}

int main()
{
    bank_account bacc[3];
    for(int i=0; i<3; i++)
    {
        bacc[i].init();
    }

    cout << "The account balances are as follows: " << endl;
    for(int i=0; i<3; i++)
    {
        bacc[i].display_balance();
    }
    return 0;
}