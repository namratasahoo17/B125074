#include <iostream>
#include <string>
using namespace std;

// Class to calculate water bill
class WaterBill
{
private:
    int consumerNumber;
    string consumerName;
    float waterConsumption, bill;

public:
    // Accept consumer details
    void input()
    {
        cout << "Enter Consumer Number: ";
        cin >> consumerNumber;
        cin.ignore();

        cout << "Enter Consumer Name: ";
        getline(cin, consumerName);

        cout << "Enter Water Consumption (in litres): ";
        cin >> waterConsumption;
    }

    // Calculate water bill using slab rates
    void calculateBill()
    {
        if (waterConsumption <= 500)
        {
            bill = waterConsumption * 2;
        }
        else if (waterConsumption <= 1000)
        {
            bill = (500 * 2) + ((waterConsumption - 500) * 3);
        }
        else
        {
            bill = (500 * 2) + (500 * 3) + ((waterConsumption - 1000) * 5);
        }
    }

    // Display consumer bill
    void display()
    {
        cout << "\n----- Water Bill -----" << endl;
        cout << "Consumer Number   : " << consumerNumber << endl;
        cout << "Consumer Name     : " << consumerName << endl;
        cout << "Water Consumption : " << waterConsumption << " litres" << endl;
        cout << "Total Bill        : Rs. " << bill << endl;
    }
};

int main()
{
    WaterBill w;   // Create object

    w.input();
    w.calculateBill();
    w.display();

    return 0;
}