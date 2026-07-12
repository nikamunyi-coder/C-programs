/*  Hotel Booking System
 *   Nimrod Kamunyi
 *   BCS-05-0012/2025
 */
#include <iostream>
#include <string>

using namespace std;

class RoomBooking {
    string guestName;
    int         roomNumber, daysBooked;

  public:
    RoomBooking(string guestName__, int roomNumber__, int daysBooked__)
    {
        guestName  = guestName__;
        roomNumber = roomNumber__;
        daysBooked = daysBooked__;
        cout << "Room booking confirmed\n";
    }

    void displayBooking()
    {
        cout << "Guest Name: " << guestName << "\n";
        cout << "Room Number: " << roomNumber << "\n";
        cout << "Days Booked: " << daysBooked << "\n";
    }

    ~RoomBooking() { cout << "Booking ended, room released\n"; }
};

int main()
{
    RoomBooking b("Juan", 567, 3);
    b.displayBooking();
    return 0;
}
