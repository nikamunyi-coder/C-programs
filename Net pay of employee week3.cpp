/* Compute the Net Pay of an employee using a separate reusable function.
 * Nimrod Kamunyi
 * BCS-05-0012/2025
 */

#include <iostream>
#include <string>

using namespace std;

float computeNetPay(int hoursWorked, float ratePerHour)
{
    float netPay, basicPay, taxPercentage, totalTax;
    basicPay = hoursWorked * ratePerHour;

    if (basicPay > 50000) taxPercentage = 20;
    else if (basicPay > 20000) taxPercentage = 10;
    else taxPercentage = 0;

    totalTax = basicPay * taxPercentage / 100;

    netPay = basicPay - totalTax;

    return netPay;
}

int main()
{
    float  netPay, ratePerHour;
    string employeeName;
    int    hoursWorked;

    cout << "Enter Employee Name: ";
    cin >> employeeName;

    cout << "Enter hours worked, and rate per hour: " << endl;
    cin >> hoursWorked >> ratePerHour;

    netPay = computeNetPay(hoursWorked, ratePerHour);
    cout << "Net Pay: " << netPay << endl;

    return 0;
}
