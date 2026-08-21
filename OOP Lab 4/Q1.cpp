#include <iostream>
#include <string>
using namespace std;

class Weather
{
private:
    string cityName;
    float temperature;
    string weatherCondition;

public:

    // Function to accept weather details
    void accept()
    {
        cout << "Enter City Name: ";
        getline(cin, cityName);

        cout << "Enter Temperature: ";
        cin >> temperature;

        cin.ignore();

    }

    // Friend function declaration
    friend void generateReport(Weather w);
};

// Friend function to generate weather report
void generateReport(Weather w)
{
    cout << "\n========== WEATHER REPORT ==========" << endl;

    cout << "City Name         : " << w.cityName << endl;
    cout << "Temperature       : " << w.temperature << " C" << endl;

    // Classifying the temperature
    if (w.temperature > 35)
    {   
        w.weatherCondition = "Very Hot";
        cout << "Weather Condition  : " << w.weatherCondition << endl;
    }
    else if (w.temperature >= 20)
    {   
        w.weatherCondition = "Pleasnt";
        cout << "Weather Condition  : " << w.weatherCondition << endl;
    }
    else
    {   
        w.weatherCondition = "Cool";
        cout << "Weather Condition  : " << w.weatherCondition << endl;
    }
}

int main()
{
    Weather w;

    // Accepting weather details
    w.accept();

    // Calling the friend function
    generateReport(w);

    return 0;
}