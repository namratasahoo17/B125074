#include <iostream>
#include <string>
using namespace std;

class PrinterManager;

class Printer
{
private:
    string printerName;
    int pagesPrinted;
    int inkLevel;
    bool powerStatus;

public:

    // Constructor to initialize printer details
    Printer()
    {
        printerName = "HP Printer";
        cout << "Enter number of Pages Printed  : ";
        cin >> pagesPrinted;
        cout << "Enter the ink level (in percentage %) : ";
        cin >> inkLevel;
        powerStatus = false;
    }

    // Declaring PrinterManager as a friend class
    friend class PrinterManager;
};

class PrinterManager
{
public:

    // Function to display printer information
    void displayInfo(Printer &p)
    {
        cout << "\n========== PRINTER INFORMATION ==========" << endl;
        cout << "Printer Name     : " << p.printerName << endl;
        cout << "Pages Printed    : " << p.pagesPrinted << endl;
        cout << "Ink Level        : " << p.inkLevel << "%" << endl;

        if (p.powerStatus)
            cout << "Power Status     : ON" << endl;
        else
            cout << "Power Status     : OFF" << endl;
    }

    // Function to turn the printer ON
    void turnOn(Printer &p)
    {
        p.powerStatus = true;
        cout << "\nPrinter is now ON." << endl;
    }

    // Function to turn the printer OFF
    void turnOff(Printer &p)
    {
        p.powerStatus = false;
        cout << "\nPrinter is now OFF." << endl;
    }

    // Function to check ink level
    void checkInk(Printer &p)
    {
        cout << "\nCurrent Ink Level = " << p.inkLevel << "%" << endl;
    }

    // Function to reset page count
    void resetPageCount(Printer &p)
    {
        p.pagesPrinted = 0;
        cout << "\nPage count has been reset." << endl;
    }
};

int main()
{
    Printer printer;
    PrinterManager manager;

    // Display initial printer information
    manager.displayInfo(printer);

    // Turning printer ON
    manager.turnOn(printer);

    // Checking ink level
    manager.checkInk(printer);

    // Resetting page count
    manager.resetPageCount(printer);

    // Turning printer OFF
    manager.turnOff(printer);

    // Displaying updated information
    manager.displayInfo(printer);

    return 0;
}