#include <iostream>
using namespace std;

// Function to accept array elements
void acceptElements(int *arr, int n)
{
    cout << "Enter " << n << " elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

// Function to calculate the sum
int calculateSum(int *arr, int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

// Function to find the smallest element
int findSmallest(int *arr, int n)
{
    int smallest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    return smallest;
}

// Function to find the largest element
int findLargest(int *arr, int n)
{
    int largest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
}

// Function to display the results
void displayResults(int sum, int smallest, int largest)
{
    cout << "\n----- Results -----" << endl;
    cout << "Sum      = " << sum << endl;
    cout << "Smallest = " << smallest << endl;
    cout << "Largest  = " << largest << endl;
}

int main()
{
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    // Dynamically allocating the array
    int *arr = new int[n];

    // Calling the required functions
    acceptElements(arr, n);

    int sum = calculateSum(arr, n);
    int smallest = findSmallest(arr, n);
    int largest = findLargest(arr, n);

    displayResults(sum, smallest, largest);

    // Releasing the dynamically allocated memory
    delete[] arr;

    return 0;
}