#include <iostream>
#include <string>
using namespace std;

// Class to manage hostel fee details
class HostelFee
{
private:
    string studentName;
    int hostelID, numberOfMonths;
    float monthlyFee, totalFee;
    char paymentDelayed;

public:
    // Accept student details
    void input()
    {
        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, studentName);

        cout << "Enter Hostel ID: ";
        cin >> hostelID;

        cout << "Enter Monthly Fee: ";
        cin >> monthlyFee;

        cout << "Enter Number of Months: ";
        cin >> numberOfMonths;

        cout << "Is Payment Delayed? (Y/N): ";
        cin >> paymentDelayed;
    }

    // Calculate total hostel fee
    void calculateFee()
    {
        totalFee = monthlyFee * numberOfMonths;

        if (paymentDelayed == 'Y' || paymentDelayed == 'y')
        {
            totalFee += 500;
        }
    }

    // Display final amount payable
    void display()
    {
        cout << "\n----- Hostel Fee Details -----" << endl;
        cout << "Student Name : " << studentName << endl;
        cout << "Hostel ID    : " << hostelID << endl;
        cout << "Monthly Fee  : " << monthlyFee << endl;
        cout << "Months       : " << numberOfMonths << endl;
        cout << "Total Amount : " << totalFee << endl;
    }
};

int main()
{
    HostelFee h;   // Create object

    h.input();
    h.calculateFee();
    h.display();

    return 0;
}