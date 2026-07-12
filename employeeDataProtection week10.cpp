/* Employee Data Protection system (encapsulation)
 * Nimrod Kamunyi
 * BCS-05-0012/2025
 */

#include <iostream>
#include <string>

using namespace std;

class Employee {
  private:
    string name, id;
    float       basicSalary;

  public:
    void setEmployeeDetails(string name__, string id__, float salary__)
    {
        name        = name__;
        basicSalary = salary__;
        id          = id__;
    }

    float calculateSalary() { return basicSalary + (0.10 * basicSalary); }

    void displayEmployeeDetails()
    {
        cout << "Name: " << name << "\n";
        cout << "Id: " << id << "\n";
        cout << "Net Salary: " << calculateSalary() << "\n";
    }
};

int main()
{
    Employee e;
    e.setEmployeeDetails("Juan", "DUHE8", 8900.0);
    e.displayEmployeeDetails();
    return 0;
}
