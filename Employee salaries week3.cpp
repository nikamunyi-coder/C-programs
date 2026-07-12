/* Calculate Employee salaries in a structured way using functions
 * Nimrod Kamunyi
 * BCS-05-0012/2025
 */

#include <iostream>
#include <string>

using namespace std;

float calculateOvertimePay(float overtimeHours, float ratePerHour)
{
    return overtimeHours * ratePerHour;
}

float calculateNetsalary(float basicSalary, float overtimePay) { return basicSalary + overtimePay; }

void getEmployeeDetails(string& employeeName, float& basicSalary, float& overtimeHours)
{
    cout << "Enter Employee Name: ";
    cin >> employeeName;

    cout << "Enter basic salary, and overtime hours worked : " << "\n";
    cin >> basicSalary >> overtimeHours;
}

void displayPayslip(string employeeName, float netSalary)
{
    cout << "Employee Name: " << employeeName << "\n";
    cout << "Net Salary: " << netSalary << "\n";
}

int main()
{
    string employeeName;
    float       basicSalary, overtimeHours, ratePerHour, netSalary, overtimePay;
    ratePerHour = 50.0;
    getEmployeeDetails(employeeName, basicSalary, overtimeHours);
    overtimePay = calculateOvertimePay(overtimeHours, ratePerHour);
    netSalary   = calculateNetsalary(basicSalary, overtimePay);
    displayPayslip(employeeName, netSalary);

    return 0;
}
