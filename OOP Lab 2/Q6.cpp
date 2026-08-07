#include <iostream>
using namespace std;

// Class to perform addition of two time values
class Time
{
private:
    int hour1, minute1;
    int hour2, minute2;
    int resultHour, resultMinute;

public:
    // Accept two time values
    void input()
    {
        cout << "Enter First Time (Hour Minute): ";
        cin >> hour1 >> minute1;

        cout << "Enter Second Time (Hour Minute): ";
        cin >> hour2 >> minute2;
    }

    // Add the two time values
    void addTime()
    {
        resultHour = hour1 + hour2;
        resultMinute = minute1 + minute2;

        // Convert every 60 minutes into 1 hour
        if (resultMinute >= 60)
        {
            resultHour += resultMinute / 60;
            resultMinute %= 60;
        }
    }

    // Display the result
    void display()
    {
        cout << "\nTotal Time = " << resultHour
             << " hr " << resultMinute << " min" << endl;
    }
};

int main()
{
    Time t;   // Create object

    t.input();
    t.addTime();
    t.display();

    return 0;
}