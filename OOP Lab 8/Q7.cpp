
#include <iostream>
#include <iomanip>
using namespace std;

// Base class
class ElectricityPlan {
public:
    // Virtual function for calculating electricity bill
    virtual double calculateBill(double units) {
        return 0.0;
    }

    // Virtual destructor
    virtual ~ElectricityPlan() {
    }
};

// Derived class for residential electricity plan
class ResidentialPlan : public ElectricityPlan {
public:
    // Override the bill calculation function
    double calculateBill(double units) override {
        double bill;

        // First 100 units are charged at Rs. 4 per unit
        if (units <= 100) {
            bill = units * 4;
        }
        // Additional units are charged at Rs. 6 per unit
        else {
            bill = (100 * 4) + ((units - 100) * 6);
        }

        return bill;
    }
};

// Derived class for commercial electricity plan
class CommercialPlan : public ElectricityPlan {
public:
    // Override the bill calculation function
    double calculateBill(double units) override {
        // All units are charged at Rs. 7 per unit
        return units * 7;
    }
};

int main() {
    double units;

    // Accept electricity consumption
    cout << "Enter electricity units consumed: ";
    cin >> units;

    // Create derived class objects
    ResidentialPlan residential;
    CommercialPlan commercial;

    // Create base class pointer
    ElectricityPlan* ptr;

    cout << fixed << setprecision(2);

    cout << "\n----- ELECTRICITY BILL DETAILS -----\n";

    // Calculate residential bill
    ptr = &residential;
    cout << "Residential Plan Bill: Rs. "
         << ptr->calculateBill(units) << endl;

    // Calculate commercial bill
    ptr = &commercial;
    cout << "Commercial Plan Bill : Rs. "
         << ptr->calculateBill(units) << endl;

    return 0;
}
