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
    cout <<"\nEnter amount to deposit: ";
    cin >> amount;
    balance += amount;
}

void bank_account :: withdraw()
{
    float amount;
    cout << "\nEnter amount to withdraw: ";
    cin >> amount;
    if(amount<=balance)
        balance -= amount;
    else
        cout << "Transaction declined - insufficient balance" << endl;
}

void bank_account :: display_balance()
{
    cout<<"Name: " << depositor << endl;
    cout<<"Balance: " << balance << endl;
}

int main()
{
    bank_account bacc;
    cout << "Initial balance: " << endl;
    bacc.init();
    bacc.display_balance();
    
    bacc.deposit();
    cout << "Balance after deposit: " << endl;
    bacc.display_balance();

    bacc.withdraw();
    cout << "Balance after withdrawal: " << endl;
    bacc.display_balance();

    return 0;
}