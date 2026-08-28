#include <iostream>
using namespace std;

// Swaps two integers using references
void swapData(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Swaps two floating-point values using references
void swapData(float &a, float &b)
{
    float temp = a;
    a = b;
    b = temp;
}

// Swaps two integers using pointers
void swapData(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    float x, y;
    int p, q;

    cout << "Enter two integers for reference swapping: ";
    cin >> a >> b;

    cout << "Enter two floating-point values: ";
    cin >> x >> y;

    cout << "Enter two integers for pointer swapping: ";
    cin >> p >> q;

    cout << "\n========== BEFORE SWAPPING ==========" << endl;

    cout << "Integer values   : " << a << " " << b << endl;
    cout << "Float values     : " << x << " " << y << endl;
    cout << "Pointer values   : " << p << " " << q << endl;

    // Swapping integers using references
    swapData(a, b);

    // Swapping floating-point values using references
    swapData(x, y);

    // Swapping integers using pointers
    swapData(&p, &q);

    cout << "\n========== AFTER SWAPPING ==========" << endl;

    cout << "Integer values   : " << a << " " << b << endl;
    cout << "Float values     : " << x << " " << y << endl;
    cout << "Pointer values   : " << p << " " << q << endl;

    return 0;
}