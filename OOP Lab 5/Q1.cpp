#include <iostream>
using namespace std;

// Converts integer kilometers into meters
int convert(int kilometers)
{
    return kilometers * 1000;
}

// Converts meters into centimeters
int convert(int meters, char unit)
{
    return meters * 100;
}

// Converts floating-point kilometers into meters
float convert(float kilometers)
{
    return kilometers * 1000;
}

int main()
{
    int km, meters;
    float decimalKm;

    cout << "Enter distance(1) in kilometers (integer): ";
    cin >> km;

    cout << "Enter distance(2) in meters: ";
    cin >> meters;

    cout << "Enter distance(3) in kilometers (decimal): ";
    cin >> decimalKm;

    cout << "\n========== DISTANCE CONVERTER ==========" << endl;

    cout << km << " km = " << convert(km)
         << " meters" << endl;

    cout << meters << " meters = " << convert(meters, 'm')
         << " centimeters" << endl;

    cout << decimalKm << " km = " << convert(decimalKm)
         << " meters" << endl;

    return 0;
}