#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    // Dynamically allocating an array
    int *arr = new int[n];

    // Taking array elements as input
    cout << "Enter " << n << " elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Displaying elements in reverse order
    cout << "\nArray in reverse order:" << endl;

    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Deallocating the dynamically allocated array
    delete[] arr;

    return 0;
}