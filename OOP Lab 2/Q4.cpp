#include <iostream>
#include <string>
using namespace std;

// Class to store hotel room booking details
class HotelRoom
{
private:
    int roomNumber, daysStayed;
    string guestName;
    float costPerDay, totalRent;

public:
    // Accept booking details
    void input()
    {
        cout << "Enter Room Number: ";
        cin >> roomNumber;
        cin.ignore();

        cout << "Enter Guest Name: ";
        getline(cin, guestName);

        cout << "Enter Number of Days Stayed: ";
        cin >> daysStayed;

        cout << "Enter Cost Per Day: ";
        cin >> costPerDay;
    }

    // Calculate total room rent
    void calculateRent()
    {
        totalRent = daysStayed * costPerDay;
    }

    // Display booking details
    void display()
    {
        cout << "\n----- Booking Details -----" << endl;
        cout << "Room Number : " << roomNumber << endl;
        cout << "Guest Name  : " << guestName << endl;
        cout << "Days Stayed : " << daysStayed << endl;
        cout << "Cost/Day    : " << costPerDay << endl;
        cout << "Total Rent  : " << totalRent << endl;
    }
};

int main()
{
    HotelRoom h;   // Create object

    h.input();
    h.calculateRent();
    h.display();

    return 0;
}