#include <iostream>
#include <string>
using namespace std;

class ServiceManager;

class VehicleService
{
private:
    string vehicleNumber;
    string ownerName;
    bool serviceDue;
    int lastServiceKm;
    string ny;

public:

    // Constructor to initialize vehicle details
    VehicleService()
    {   
        cout << "Enter Vehicle Number  : ";
        cin >> vehicleNumber;

        cout << "Enter Owner Name  : ";
        cin >> ownerName;

        cout <<  "Enter if service is due(Y/N)  : ";
        cin >> ny;
        if (ny=="Y")
            serviceDue = true;
        else 
            serviceDue = false;

        cout << "Enter the last Service Distance (km)  : ";
        cin >> lastServiceKm;
    }

    // Declaring ServiceManager as a friend class
    friend class ServiceManager;
};

class ServiceManager
{
public:

    // Function to display vehicle service information
    void displayInfo(VehicleService &v)
    {
        cout << "\n========== VEHICLE SERVICE INFORMATION ==========" << endl;

        cout << "Vehicle Number       : " << v.vehicleNumber << endl;
        cout << "Owner Name           : " << v.ownerName << endl;
        cout << "Last Service         : " << v.lastServiceKm << " km" << endl;

        if (v.serviceDue)
            cout << "Service Due Status   : Service Required" << endl;
        else
            cout << "Service Due Status   : Service Not Required" << endl;
    }

    // Function to mark service as completed
    void completeService(VehicleService &v)
    {
        v.serviceDue = false;
        cout << "\nVehicle service has been marked as completed." << endl;
    }

    // Function to update last service kilometres
    void updateKilometres(VehicleService &v, int km)
    {
        v.lastServiceKm = km;
        cout << "\nLast service kilometres updated." << endl;
    }

    // Function to check whether service is required
    void checkService(VehicleService &v)
    {
        if (v.serviceDue)
            cout << "\nService is required for this vehicle." << endl;
        else
            cout << "\nService is not currently required." << endl;
    }
};

int main()
{
    VehicleService vehicle;
    ServiceManager manager;
    int serkm;

    // Display initial vehicle information
    manager.displayInfo(vehicle);

    // Checking service status
    manager.checkService(vehicle);

    // Updating last service kilometres
    cout << "Enter service distance to be updated   : ";
    cin >> serkm;
    manager.updateKilometres(vehicle, serkm);

    // Marking service as completed
    manager.completeService(vehicle);

    // Checking status again
    manager.checkService(vehicle);

    // Displaying final information
    manager.displayInfo(vehicle);

    return 0;
}