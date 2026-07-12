/* Student Fee Management System using classes and objects
 *   Nimrod Kamunyi
 *   BCS-05-0012/2025
 */
#include <iostream>
#include <string>
using namespace std;

class Student {
    string name__, admNo__;
    int    feeBalance__;

  public:
    void inputStudent(string name, string admNo, int feeBalance)
    {
        name__       = name;
        admNo__      = admNo;
        feeBalance__ = feeBalance;
    }

    void makePayment(int amount) { feeBalance__ -= amount; }

    void displayStatus()
    {
        cout << "Name: " << name__ << "\nAdm No: " << admNo__ << "\nBalance: " << feeBalance__
             << "\n";
    }
};

int main()
{
    Student s;
    s.inputStudent("John Maasai", "BCS-0091", 45000);
    s.makePayment(23000);
    s.displayStatus();
}
