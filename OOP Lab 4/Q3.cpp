#include <iostream>
#include <string>
using namespace std;

class Camera
{
private:
    string brand;
    string model;
    float megapixels;
    int storageCapacity;

public:

    // Function to accept camera details
    void accept()
    {
        cout << "Enter Brand: ";
        getline(cin, brand);

        cout << "Enter Model: ";
        getline(cin, model);

        cout << "Enter Megapixels: ";
        cin >> megapixels;

        cout << "Enter Storage Capacity (GB): ";
        cin >> storageCapacity;

        cin.ignore();
    }

    // Friend function declaration
    friend void compareCamera(Camera c1, Camera c2);
};

// Friend function to compare two cameras
void compareCamera(Camera c1, Camera c2)
{
    Camera better;

    // Comparing megapixels first
    if (c1.megapixels > c2.megapixels)
    {
        better = c1;
    }
    else if (c2.megapixels > c1.megapixels)
    {
        better = c2;
    }
    else
    {
        // If megapixels are same, compare storage capacity
        if (c1.storageCapacity > c2.storageCapacity)
        {
            better = c1;
        }
        else
        {
            better = c2;
        }
    }

    cout << "\n========== BETTER CAMERA ==========" << endl;

    cout << "Brand            : " << better.brand << endl;
    cout << "Model            : " << better.model << endl;
    cout << "Megapixels       : " << better.megapixels << endl;
    cout << "Storage Capacity : " << better.storageCapacity << " GB" << endl;
}

int main()
{
    Camera camera1, camera2;

    cout << "Enter details of Camera 1" << endl;
    camera1.accept();

    cout << "\nEnter details of Camera 2" << endl;
    camera2.accept();

    // Comparing both cameras
    compareCamera(camera1, camera2);

    return 0;
}