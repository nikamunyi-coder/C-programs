#include <iostream>
using namespace std;

int main() {
    
    int bookID, dueDate, returnDate;
    int daysOverdue, fineAmount;


    cout << "Enter Book ID: ";
    cin >> bookID;
    cout << "Enter Due Date (as an integer): ";
    cin >> dueDate;
    cout << "Enter Return Date (as an integer): ";
    cin >> returnDate;

    
    daysOverdue = returnDate - dueDate;


    if (daysOverdue <= 0) {
        fineAmount = 0;
    } else if (daysOverdue <= 7) {
        fineAmount = daysOverdue * 20;
    } else if (daysOverdue <= 14) {
        fineAmount = (7 * 20) + ((daysOverdue - 7) * 50);
    } else {
        fineAmount = (7 * 20) + (7 * 50) + ((daysOverdue - 14) * 100);
    }

    
    cout << "\n--- Library Fine Details ---\n";
    cout << "Book ID: " << bookID << endl;
    cout << "Due Date: " << dueDate << endl;
    cout << "Return Date: " << returnDate << endl;
    cout << "Days Overdue: " << daysOverdue << endl;
    cout << "Total Fine Amount (Ksh): " << fineAmount << endl;

    return 0;
}
