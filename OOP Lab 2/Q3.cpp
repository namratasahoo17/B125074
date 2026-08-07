#include <iostream>
using namespace std;

// Class to convert Celsius to Fahrenheit
class Temperature
{
private:
    float celsius, fahrenheit;

public:
    // Accept temperature in Celsius
    void input()
    {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
    }

    // Convert Celsius to Fahrenheit
    void convert()
    {
        fahrenheit = (9.0 / 5.0) * celsius + 32;
    }

    // Display both temperatures
    void display()
    {
        cout << "\nTemperature in Celsius    : " << celsius << " °C" << endl;
        cout << "Temperature in Fahrenheit : " << fahrenheit << " °F" << endl;
    }
};

int main()
{
    Temperature t;   // Create object

    t.input();
    t.convert();
    t.display();

    return 0;
}