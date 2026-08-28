#include <iostream>
using namespace std;

// Increases an integer variable by the given amount
void update(int &number, int amount)
{
    number = number + amount;
}

// Increases a floating-point variable by the given amount
void update(float &number, float amount)
{
    number = number + amount;
}

// Increases every element of an integer array
void update(int arr[], int n, int amount)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] + amount;
    }
}

int main()
{
    int number;
    float decimalNumber;
    int n;
    int amount;

    cout << "Enter an integer: ";
    cin >> number;

    cout << "Enter a floating-point value: ";
    cin >> decimalNumber;

    cout << "Enter size of integer array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter array elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter amount to increase: ";
    cin >> amount;

    cout << "\n========== BEFORE UPDATE ==========" << endl;

    cout << "Integer value         : " << number << endl;
    cout << "Floating-point value  : " << decimalNumber << endl;

    cout << "Array                 : ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Updating the integer
    update(number, amount);

    // Updating the floating-point value
    update(decimalNumber, (float)amount);

    // Updating all array elements
    update(arr, n, amount);

    cout << "\n\n========== AFTER UPDATE ==========" << endl;

    cout << "Integer value         : " << number << endl;
    cout << "Floating-point value  : " << decimalNumber << endl;

    cout << "Array                 : ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Releasing dynamically allocated memory
    delete[] arr;

    return 0;
}