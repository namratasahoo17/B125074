#include <iostream>
#include <string>
using namespace std;

// Class to store cricket player details
class CricketPlayer
{
private:
    string playerName;
    int matchesPlayed;
    float totalRuns, battingAverage;

public:
    // Accept player details
    void input()
    {
        cin.ignore();

        cout << "Enter Player Name: ";
        getline(cin, playerName);

        cout << "Enter Matches Played: ";
        cin >> matchesPlayed;

        cout << "Enter Total Runs Scored: ";
        cin >> totalRuns;
    }

    // Calculate batting average
    void calculateAverage()
    {
        if (matchesPlayed > 0)
            battingAverage = totalRuns / matchesPlayed;
        else
            battingAverage = 0;
    }

    // Display player report
    void display()
    {
        cout << "\n----- Player Report -----" << endl;
        cout << "Player Name      : " << playerName << endl;
        cout << "Matches Played   : " << matchesPlayed << endl;
        cout << "Total Runs       : " << totalRuns << endl;
        cout << "Batting Average  : " << battingAverage << endl;

        cout << "Performance      : ";

        if (battingAverage >= 50)
            cout << "Excellent";
        else if (battingAverage >= 35)
            cout << "Good";
        else if (battingAverage >= 20)
            cout << "Average";
        else
            cout << "Poor";

        cout << endl;
    }
};

int main()
{
    CricketPlayer p;   // Create object

    p.input();
    p.calculateAverage();
    p.display();

    return 0;
}