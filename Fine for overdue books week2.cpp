/* Calculating the fine for overdue books
*   Nimrod Kamunyi
*   BCS-05-0012/2025
*/
#include <iostream>
using namespace std;

int main()
{
    int bookId, dueDate, returnDate, daysOverdue, fineAmount, fineRate;

    cout << "Enter The Book Id, return date, and due date: " << "\n";
    cin >> bookId >> returnDate >> dueDate;

    daysOverdue = returnDate - dueDate;
    if (daysOverdue < 0) daysOverdue = 0;

    if (daysOverdue == 0) fineRate = 0;
    else if (daysOverdue <= 7) fineRate = 20;
    else if (daysOverdue <= 14) fineRate = 50;
    else fineRate = 100;

    fineAmount = fineRate * daysOverdue;

    cout << "Book ID: " << bookId << "\n";
    cout << "Due Date: " << dueDate << "\n";
    cout << "Return Date: " << returnDate << "\n";
    cout << "Days Overdue: " << daysOverdue << "\n";
    cout << "Fine Rate: " << fineRate << "\n";
    cout << "Fine Amount: " << fineAmount << "\n";

    return 0;
}
