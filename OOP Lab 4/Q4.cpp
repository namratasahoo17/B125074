#include <iostream>
#include <string>
using namespace std;

class ElectricMeter
{
private:
    int meterNumber;
    string consumerName;
    float unitsConsumed;

public:

    // Function to accept meter details
    void accept()
    {
        cout << "Enter Meter Number: ";
        cin >> meterNumber;

        cin.ignore();

        cout << "Enter Consumer Name: ";
        getline(cin, consumerName);

        cout << "Enter Units Consumed: ";
        cin >> unitsConsumed;
    }

    // Friend function declaration
    friend void checkUsage(ElectricMeter e);
};

// Friend function to check electricity usage
void checkUsage(ElectricMeter e)
{
    cout << "\n========== ELECTRICITY USAGE ==========" << endl;

    cout << "Meter Number    : " << e.meterNumber << endl;
    cout << "Consumer Name   : " << e.consumerName << endl;
    cout << "Units Consumed  : " << e.unitsConsumed << endl;

    // Categorizing electricity usage
    if (e.unitsConsumed < 100)
    {
        cout << "Usage Category  : Low Usage" << endl;
    }
    else if (e.unitsConsumed <= 300)
    {
        cout << "Usage Category  : Moderate Usage" << endl;
    }
    else
    {
        cout << "Usage Category  : High Usage" << endl;
    }
}

int main()
{
    ElectricMeter meter;

    // Accepting meter details
    meter.accept();

    // Calling friend function
    checkUsage(meter);

    return 0;
}