/* Determining a student scholarship status from attendance and marks
 * Nimrod Kamunyi
 * BCS-05-0012/2025
 */
#include <iostream>
using namespace std;

int main()
{
    string studentName, scholarshipStatus;
    float       attendance;
    int         marks;

    cout << "Enter your Name: " << "\n";
    getline(cin, studentName);

    cout << "Enter your attendance(float), and marks: " << "\n";
    cin >> attendance >> marks;

    if (marks >= 70) {
        if (attendance >= 80) scholarshipStatus = "Full Scholarship";
        else scholarshipStatus = "Partial Scholarship";
    } else if (marks >= 50) {
        if (attendance >= 85) scholarshipStatus = "Partial Scholarship";
        else scholarshipStatus = "No Scholarship";
    } else {
        scholarshipStatus = "No Scholarship";
    }

    cout << "Student Name: " << studentName << "\n";
    cout << "Scholarship Status: " << scholarshipStatus << "\n";

    return 0;
}
