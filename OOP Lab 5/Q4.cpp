#include <iostream>
using namespace std;

// Calculates the sum of an integer array
int process(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

// Calculates the sum of a floating-point array
float process(float arr[], int n)
{
    float sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

// Calculates the sum of the first k elements
int process(int arr[], int n, int k)
{
    int sum = 0;

    // Add only the first k elements
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    int intSize;
    int floatSize;
    int k;

    // Input for integer array
    cout << "Enter size of integer array: ";
    cin >> intSize;

    int *intArr = new int[intSize];

    cout << "Enter integer array elements:" << endl;

    for (int i = 0; i < intSize; i++)
    {
        cin >> intArr[i];
    }

    // Input for floating-point array
    cout << "\nEnter size of floating-point array: ";
    cin >> floatSize;

    float *floatArr = new float[floatSize];

    cout << "Enter floating-point array elements:" << endl;

    for (int i = 0; i < floatSize; i++)
    {
        cin >> floatArr[i];
    }

    // Input for number of elements to process
    cout << "\nEnter number of integer elements to process (k): ";
    cin >> k;

    // Making sure k does not exceed array size
    if (k > intSize)
    {
        k = intSize;
    }

    cout << "\n========== ARRAY PROCESSING ==========" << endl;

    cout << "Sum of integer array = "
         << process(intArr, intSize) << endl;

    cout << "Sum of floating-point array = "
         << process(floatArr, floatSize) << endl;

    cout << "Sum of first " << k << " integer elements = "
         << process(intArr, intSize, k) << endl;

    // Releasing dynamically allocated memory
    delete[] intArr;
    delete[] floatArr;

    return 0;
}