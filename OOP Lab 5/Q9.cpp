#include <iostream>
using namespace std;

// Displays the value of an integer variable
void inspect(int number)
{
    cout << "Value of integer variable = "
         << number << endl;
}

// Displays the value stored at an integer pointer
void inspect(int *ptr)
{
    cout << "Value stored at pointer = "
         << *ptr << endl;
}

// Displays array elements using a pointer
void inspect(int *arr, int n)
{
    cout << "Array elements = ";

    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << " ";
    }

    cout << endl;
}

int main()
{
    int number;
    int pointerValue;
    int n;

    cout << "Enter an integer variable: ";
    cin >> number;

    cout << "Enter value for pointer: ";
    cin >> pointerValue;

    cout << "Enter size of array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter array elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Pointer pointing to pointerValue
    int *ptr = &pointerValue;

    cout << "\n========== DATA INSPECTION ==========" << endl;

    // Calls inspect(int)
    inspect(number);

    // Calls inspect(int*)
    inspect(ptr);

    // Calls inspect(int*, int)
    inspect(arr, n);

    // Releasing dynamically allocated memory
    delete[] arr;

    return 0;
}