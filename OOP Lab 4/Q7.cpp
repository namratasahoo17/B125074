#include <iostream>
#include <string>
using namespace std;

class MuseumManager;

class Exhibit
{
private:
    string exhibitName;
    int exhibitID;
    int visitorCount;
    bool displayStatus;

public:

    // Constructor to initialize exhibit details
    Exhibit()
    {
        exhibitName = "Ancient History";
        cout << "Enter exhibit ID  : ";
        cin >> exhibitID;
        cout << "Enter Visitor count  : ";
        cin >> visitorCount;
        displayStatus = true;
    }

    // Declaring MuseumManager as friend class
    friend class MuseumManager;
};

class MuseumManager
{
public:

    // Function to display exhibit information
    void displayInfo(Exhibit &e)
    {
        cout << "\n========== EXHIBIT INFORMATION ==========" << endl;

        cout << "Exhibit Name   : " << e.exhibitName << endl;
        cout << "Exhibit ID     : " << e.exhibitID << endl;
        cout << "Visitor Count  : " << e.visitorCount << endl;

        if (e.displayStatus)
            cout << "Display Status : Open" << endl;
        else
            cout << "Display Status : Closed" << endl;
    }

    // Function to add visitors
    void addVisitors(Exhibit &e, int count)
    {
        e.visitorCount += count;
        cout << "\n" << count << " visitors added." << endl;
    }

    // Function to reset visitor count
    void resetVisitors(Exhibit &e)
    {
        e.visitorCount = 0;
        cout << "\nVisitor count has been reset." << endl;
    }

    // Function to open the exhibit
    void openExhibit(Exhibit &e)
    {
        e.displayStatus = true;
        cout << "\nExhibit is now open." << endl;
    }

    // Function to close the exhibit
    void closeExhibit(Exhibit &e)
    {
        e.displayStatus = false;
        cout << "\nExhibit is now closed." << endl;
    }

    // Function to display current status
    void checkStatus(Exhibit &e)
    {
        if (e.displayStatus)
            cout << "\nExhibit Status: Open" << endl;
        else
            cout << "\nExhibit Status: Closed" << endl;
    }
};

int main()
{
    Exhibit exhibit;
    MuseumManager manager;
    int my;

    // Display initial information
    manager.displayInfo(exhibit);

    // Opening the exhibit
    manager.openExhibit(exhibit);

    // Adding visitors
    cout << "Enter number of visitors comming in  : ";
    cin >> my;
    manager.addVisitors(exhibit, my);

    // Checking exhibit status
    manager.checkStatus(exhibit);

    // Displaying updated information
    manager.displayInfo(exhibit);

    // Resetting visitor count
    manager.resetVisitors(exhibit);

    // Closing the exhibit
    manager.closeExhibit(exhibit);

    return 0;
}