#include <iostream>
using namespace std;

int main()
{
    int n, searchValue;
    bool found = false;

    cout << "Enter the size of array: ";
    cin >> n;

    // Dynamically allocating the array
    int *arr = new int[n];

    // Taking array elements
    cout << "Enter " << n << " elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Taking the element to search
    cout << "Enter the element to search: ";
    cin >> searchValue;

    // Searching the element
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == searchValue)
        {
            cout << "\nElement found at position " << i + 1 << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "\nElement is not present in the array." << endl;
    }

    // Deallocating memory
    delete[] arr;

    return 0;
}