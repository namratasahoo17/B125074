#include <iostream>
using namespace std;

int main()
{
    int n;
    int even = 0, odd = 0;

    cout << "Enter the size of array: ";
    cin >> n;

    // Dynamically allocating the array
    int *arr = new int[n];

    // Taking input
    cout << "Enter " << n << " elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Checking each element
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    // Displaying the result
    cout << "\nNumber of even elements = " << even << endl;
    cout << "Number of odd elements = " << odd << endl;

    // Releasing memory
    delete[] arr;

    return 0;
}