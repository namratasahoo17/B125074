
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Base class
class Ticket {
protected:
    string passengerName;
    double distance;

public:
    // Constructor to initialize passenger details
    Ticket(string name, double dist) {
        passengerName = name;
        distance = dist;
    }
};

// Derived class inheriting Ticket
class RailwayTicket : public Ticket {
private:
    double farePerKm;

public:
    // Constructor initializes base class and derived class members
    RailwayTicket(string name, double dist, double fare)
        : Ticket(name, dist) {
        farePerKm = fare;
    }

    // Function to calculate and display ticket fare
    void calculateFare() {
        double basicFare = distance * farePerKm;
        double discount = 0.0;
        double finalFare = basicFare;

        // Apply 10% discount if distance exceeds 300 km
        if (distance > 300) {
            discount = basicFare * 0.10;
            finalFare = basicFare - discount;
        }

        cout << "\n----- RAILWAY TICKET DETAILS -----\n";
        cout << "Passenger Name : " << passengerName << endl;
        cout << "Distance       : " << distance << " km" << endl;
        cout << "Fare per Km    : Rs. " << farePerKm << endl;
        cout << "Basic Fare     : Rs. " << basicFare << endl;
        cout << "Discount       : Rs. " << discount << endl;
        cout << "Final Fare     : Rs. "
             << finalFare << endl;
    }
};

int main() {
    string name;
    double distance, fare;

    // Taking passenger details as input
    cout << "Enter passenger name: ";
    getline(cin, name);

    cout << "Enter distance travelled (km): ";
    cin >> distance;

    cout << "Enter fare per kilometre: ";
    cin >> fare;

    // Creating derived class object
    RailwayTicket ticket(name, distance, fare);

    // Calculating and displaying fare
    ticket.calculateFare();

    return 0;
}
