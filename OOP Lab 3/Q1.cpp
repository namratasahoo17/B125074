#include <iostream>
using namespace std;

int main()
{
    // Dynamically allocating memory for two integers
    int *a = new int;
    int *b = new int;

    // Taking input from the user
    cout << "Enter first number: ";
    cin >> *a;

    cout << "Enter second number: ";
    cin >> *b;

    // Displaying the results
    cout << "\nSum = " << (*a + *b) << endl;
    cout << "Difference = " << (*a - *b) << endl;
    cout << "Product = " << (*a * *b) << endl;

    // Checking division by zero
    if (*b != 0)
        cout << "Quotient = " << (float)*a / *b << endl;
    else
        cout << "Quotient cannot be calculated because divisor is zero." << endl;

    // Releasing dynamically allocated memory
    delete a;
    delete b;

    return 0;
}