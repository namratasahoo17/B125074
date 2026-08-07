#include <iostream>
#include <string>
using namespace std;

// Class to store movie ticket booking details
class MovieTicket
{
private:
    string movieName;
    float ticketPrice, totalCost;
    int numberOfTickets;

public:
    // Accept booking details
    void input()
    {
        cin.ignore();

        cout << "Enter Movie Name: ";
        getline(cin, movieName);

        cout << "Enter Ticket Price: ";
        cin >> ticketPrice;

        cout << "Enter Number of Tickets: ";
        cin >> numberOfTickets;
    }

    // Calculate total ticket cost
    void calculateCost()
    {
        totalCost = ticketPrice * numberOfTickets;
    }

    // Display booking summary
    void display()
    {
        cout << "\n----- Booking Summary -----" << endl;
        cout << "Movie Name        : " << movieName << endl;
        cout << "Ticket Price      : " << ticketPrice << endl;
        cout << "Number of Tickets : " << numberOfTickets << endl;
        cout << "Total Cost        : " << totalCost << endl;
    }
};

int main()
{
    MovieTicket m;   // Create object

    m.input();
    m.calculateCost();
    m.display();

    return 0;
}