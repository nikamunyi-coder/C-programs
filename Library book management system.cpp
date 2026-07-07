/* Library Book Management System using classes and objects
 *   Nimrod Kamunyi
 *   BCS-03-0091/2025
 */
#include <iostream>
#include <string>
using namespace std;

class Book {
    string title__, author__;
    int    available__;

  public:
    void inputDetails(string title, string author, int available)
    {
        available__ = available;
        title__     = title;
        author__    = author;
    }

    void borrowBook() { available__--; }

    void displayDetails()
    {
        cout << "Title: " << title__ << "\nAuthor: " << author__ << "\nAvailable: " << available__
             << "\n";
    }
};

int main()
{
    Book b;
    b.inputDetails("The Shinning", "Stephen King", 69);
    b.borrowBook();
    b.displayDetails();
}
