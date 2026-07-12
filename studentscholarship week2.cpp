#include <iostream>
#include <string>

using namespace std;

int main() {
    string studentName;
    double marks, attendance;
    string scholarshipStatus;

    
    cout << "Enter student name: ";
    getline(cin, studentName);
    cout << "Enter exam marks (0-100): ";
    cin >> marks;
    cout << "Enter attendance percentage (0-100): ";
    cin >> attendance;
    cin.ignore(); // Clear input buffer after numeric input

    // Input validation
    if (marks < 0 || marks > 100 || attendance < 0 || attendance > 100) {
        cout << "\nError: Marks and attendance must be between 0 and 100." << endl;
        return 1;
    }

    // Scholarship eligibility logic
    // Marks >= 70: Full Scholarship if attendance >= 80, else Partial
    // Marks 50-69: Partial Scholarship if attendance >= 85, else None
    // Marks < 50: No Scholarship
    if (marks >= 70) {
        if (attendance >= 80) {
            scholarshipStatus = "Full Scholarship";
        } else {
            scholarshipStatus = "Partial Scholarship";
        }
    } 
    else if (marks >= 50) { // Marks between 50 and 69
        if (attendance >= 85) {
            scholarshipStatus = "Partial Scholarship";
        } else {
            scholarshipStatus = "No Scholarship";
        }
    } 
    else { // Marks below 50
        scholarshipStatus = "No Scholarship";
    }

    
    cout << "\n--- Scholarship Results ---" << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Scholarship Status: " << scholarshipStatus << endl;

    return 0;
}
