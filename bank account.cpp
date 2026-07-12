/*  Bank Account System
 *   Nimrod Kamunyi
 *   BCS-05-0012/2025
 */

#include <iostream>
#include <string>

using namespace std;

class BankAccount {
    string holderName;
    int         accNumber;
    float       balance;

  public:
    BankAccount(string holderName__, int accNumber__, float balance__)
    {
        holderName = holderName__;
        accNumber  = accNumber__;
        balance    = balance__;
        cout << "Account successfully created\n";
    }

    void displayAccount()
    {
        cout << "Holder Name: " << holderName << "\n";
        cout << "Account Number: " << accNumber << "\n";
        cout << "Balance : " << balance << "\n";
    }

    ~BankAccount() { cout << "Account closed successfully\n"; }
};

int main()
{
    BankAccount acc("Juan", 789, 3400.0);
    acc.displayAccount();
    return 0;
}
