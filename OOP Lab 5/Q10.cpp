#include <iostream>
using namespace std;

// Calculates average of two integers
float evaluate(int a, int b)
{
    return (a + b) / 2.0;
}

// Calculates average of three integers
float evaluate(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

// Calculates average of two floating-point values
float evaluate(float a, float b)
{
    return (a + b) / 2.0;
}

// Calculates average of all elements of an integer array
float evaluate(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return (float)sum / n;
}

// Calculates average of two integers using pointers
float evaluate(int *a, int *b)
{
    return (*a + *b) / 2.0;
}

int main()
{
    int a, b, c;
    float x, y;
    int n;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Enter a third integer: ";
    cin >> c;

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

    // Pointers to the two integer variables
    int *ptr1 = &a;
    int *ptr2 = &b;

    cout << "\n========== RESULT EVALUATOR ==========" << endl;

    // Average of two integers
    cout << "Average of two integers = "
         << evaluate(a, b) << endl;

    // Average of three integers
    cout << "Average of three integers = "
         << evaluate(a, b, c) << endl;

    // Average of two floating-point values
    cout << "Average of two floating-point values = "
         << evaluate(x, y) << endl;

    // Average of integer array
    cout << "Average of array elements = "
         << evaluate(arr, n) << endl;

    // Average using pointers
    cout << "Average using pointer values = "
         << evaluate(ptr1, ptr2) << endl;

    // Releasing dynamically allocated memory
    delete[] arr;

    return 0;
}