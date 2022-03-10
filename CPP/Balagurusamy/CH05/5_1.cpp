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
    strcpy(depositor, "Himanshu Kumar");
    strcpy(acno, "56987458");
    strcpy(actype, "SA");
    balance = 10000.00F;
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
    int ch;
    bank_account bacc;
    bacc.init();

    while (1)
    {
        cout << "MAIN MENU" << endl;
        cout << "1. Display Balance" << endl;
        cout << "2. Deposit Amount" << endl;
        cout << "3. Withdraw Amount" << endl;
        cout << "Enter Choice (0 to exit): ";
        cin >> ch;
        switch (ch)
        {
        case 0:
            exit(0);
            break;
        case 1:
            bacc.display_balance();
            break;
        case 2:
            bacc.deposit();
            break;
        case 3:
            bacc.withdraw();
            break;
        default:
            cout << "\nInvalid option" << endl;
        }
    }
    return 0;
}