
#include <iostream>
#include <algorithm>
using namespace std;

// Base class
class TrafficSignal {
public:
    // Virtual function to calculate green signal duration
    virtual int getGreenDuration(int vehicleCount) {
        return 0;
    }

    // Virtual destructor
    virtual ~TrafficSignal() {
    }
};

// Derived class for urban traffic signals
class UrbanSignal : public TrafficSignal {
public:
    // Override the base class function
    int getGreenDuration(int vehicleCount) override {
        // Urban formula: 10 + 2 * vehicle count
        int duration = 10 + (2 * vehicleCount);

        // Maximum green duration is 60 seconds
        return min(duration, 60);
    }
};

// Derived class for highway traffic signals
class HighwaySignal : public TrafficSignal {
public:
    // Override the base class function
    int getGreenDuration(int vehicleCount) override {
        // Highway formula: 15 + 3 * vehicle count
        int duration = 15 + (3 * vehicleCount);

        // Maximum green duration is 90 seconds
        return min(duration, 90);
    }
};

int main() {
    int vehicles;

    // Accept vehicle count
    cout << "Enter number of vehicles: ";
    cin >> vehicles;

    // Create objects of both signal types
    UrbanSignal urban;
    HighwaySignal highway;

    // Base class pointer
    TrafficSignal* ptr;

    cout << "\n----- TRAFFIC SIGNAL DETAILS -----\n";

    // Calculate urban signal duration
    ptr = &urban;
    cout << "Urban Signal Green Duration   : "
         << ptr->getGreenDuration(vehicles)
         << " seconds" << endl;

    // Calculate highway signal duration
    ptr = &highway;
    cout << "Highway Signal Green Duration : "
         << ptr->getGreenDuration(vehicles)
         << " seconds" << endl;

    return 0;
}
