#include <iostream>
#include <cmath>
using namespace std;

// Finds the integer closer to zero
int nearValue(int a, int b)
{
    if (abs(a) < abs(b))
        return a;
    else
        return b;
}

// Finds the floating-point value closer to zero
float nearValue(float a, float b)
{
    if (fabs(a) <= fabs(b))
        return a;
    else
        return b;
}

// Finds the array element closest to zero
int nearValue(int arr[], int n)
{
    int nearest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (abs(arr[i]) < abs(nearest))
        {
            nearest = arr[i];
        }
    }

    return nearest;
}

int main()
{
    int a, b;
    float x, y;
    int n;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Enter two floating-point values: ";
    cin >> x >> y;

    cout << "Enter size of integer array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter array elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\n========== NEAREST VALUE ==========" << endl;

    cout << "Integer closer to zero = "
         << nearValue(a, b) << endl;

    cout << "Floating-point value closer to zero = "
         << nearValue(x, y) << endl;

    cout << "Array element closest to zero = "
         << nearValue(arr, n) << endl;

    // Releasing dynamically allocated memory
    delete[] arr;

    return 0;
}