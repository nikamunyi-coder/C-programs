/* Calculate monthly water bills using modullar programming
 * Nimrod Kamunyi
 * BCS-05-0012/2025
 */

#include <iostream>
#include <string>

using namespace std;

void getCustomerDetails(std::string& customerName, float& unitsConsumed)
{
    cout << "Enter customer name: " << "\n";
    cin >> customerName;

    cout << "Enter units consumed: " << "\n";
    cin >> unitsConsumed;
}

float calculateBill(float unitsConsumed, float ratePerUnit) { return unitsConsumed * ratePerUnit; }
float calculateNetBill(float totalBill, float discount) { return totalBill - discount; }

float applyDiscount(float totalBill)
{
    if (totalBill > 100.0) return totalBill * 0.1;
    else return 0.0;
}

void displayBill(
    string& customerName, float unitsConsumed, float totalBill, float discount, float netBill)
{
    cout << fixed;
    cout.precision(2);
    cout << "Customer Name: " << customerName << "\n";
    cout << "Units Consumed: " << unitsConsumed << "\n";
    cout << "Total Bill :" << totalBill << "\n";
    cout << "Discount: " << discount << "\n";
    cout << "Net Bill: " << netBill << "\n";
}

int main()
{
    string customerName;
    float       unitsConsumed, totalBill, discount, netBill, ratePerUnit;
    ratePerUnit = 50.0;

    getCustomerDetails(customerName, unitsConsumed);
    totalBill = calculateBill(unitsConsumed, ratePerUnit);
    discount  = applyDiscount(totalBill);
    netBill   = calculateNetBill(totalBill, discount);
    displayBill(customerName, unitsConsumed, totalBill, discount, netBill);
}
