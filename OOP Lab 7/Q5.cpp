
#include <iostream>
#include <string>
using namespace std;

// Base class
class Sensor {
protected:
    string sensorID;

public:
    // Constructor to initialize sensor ID
    Sensor(string id = "") {
        sensorID = id;
    }
};

// First derived class using virtual inheritance
class Temperature : virtual public Sensor {
protected:
    double temperature;

public:
    // Constructor initializes temperature
    Temperature(double temp) {
        temperature = temp;
    }
};

// Second derived class using virtual inheritance
class Humidity : virtual public Sensor {
protected:
    double humidity;

public:
    // Constructor initializes humidity
    Humidity(double hum) {
        humidity = hum;
    }
};

// Derived class inheriting from both classes
class FarmMonitor : public Temperature,
                    public Humidity {
public:
    // Most derived class initializes the virtual base class
    FarmMonitor(string id, double temp, double hum)
        : Sensor(id),
          Temperature(temp),
          Humidity(hum) {
    }

    // Display all sensor details and issue warnings
    void displayStatus() {
        cout << "\n----- SMART FARM MONITOR -----\n";

        cout << "Sensor ID  : " << sensorID << endl;
        cout << "Temperature: " << temperature
             << " degree Celsius" << endl;

        cout << "Humidity   : " << humidity << "%" << endl;

        // Check environmental warning conditions
        if (temperature > 35 || humidity > 80) {
            cout << "\nWARNING: Unsafe environmental conditions!"
                 << endl;

            if (temperature > 35) {
                cout << "- Temperature exceeds 35 Celsius."
                     << endl;
            }

            if (humidity > 80) {
                cout << "- Humidity exceeds 80%."
                     << endl;
            }
        } else {
            cout << "\nEnvironmental conditions are normal."
                 << endl;
        }
    }
};

int main() {
    string id;
    double temp, hum;

    // Accept sensor information
    cout << "Enter Sensor ID: ";
    cin >> id;

    cout << "Enter temperature in Celsius: ";
    cin >> temp;

    cout << "Enter relative humidity percentage: ";
    cin >> hum;

    // Create FarmMonitor object
    FarmMonitor farm(id, temp, hum);

    // Display monitoring information
    farm.displayStatus();

    return 0;
}
