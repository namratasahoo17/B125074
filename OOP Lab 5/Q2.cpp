#include <iostream>
using namespace std;

// Calculates area of a square
int area(int side)
{
    return side * side;
}

// Calculates area of a rectangle
int area(int length, int breadth)
{
    return length * breadth;
}

// Calculates area of a circle
double area(double radius)
{
    return 3.14159 * radius * radius;
}

int main()
{
    int side;
    int length, breadth;
    double radius;

    cout << "Enter side of square: ";
    cin >> side;

    cout << "Enter length of rectangle: ";
    cin >> length;

    cout << "Enter breadth of rectangle: ";
    cin >> breadth;

    cout << "Enter radius of circle: ";
    cin >> radius;

    cout << "\n========== AREA CALCULATOR ==========" << endl;

    cout << "Area of Square    = " << area(side) << endl;
    cout << "Area of Rectangle = " << area(length, breadth) << endl;
    cout << "Area of Circle    = " << area(radius) << endl;

    return 0;
}