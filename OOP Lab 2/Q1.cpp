#include <iostream>
#include <string>
using namespace std;

// Class to store car details
class Car
{
private:
    string carNumber, brandName;
    int modelYear;

public:
    // Accept car details
    void input()
    {
        cout << "Enter Car Number: ";
        cin >> carNumber;

        cout << "Enter Brand Name: ";
        cin >> brandName;

        cout << "Enter Model Year: ";
        cin >> modelYear;
    }

    // Display car details
    void display()
    {
        cout << "\n----- Car Details -----" << endl;
        cout << "Car Number : " << carNumber << endl;
        cout << "Brand Name : " << brandName << endl;
        cout << "Model Year : " << modelYear << endl;
    }
};

int main()
{
    Car c;    // Create an object of Car

    c.input();
    c.display();

    return 0;
}