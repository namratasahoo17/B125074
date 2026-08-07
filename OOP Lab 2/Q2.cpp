#include <iostream>
using namespace std;

// Class to calculate area and perimeter of a square
class Square
{
private:
    float side;

public:
    // Accept side length
    void input()
    {
        cout << "Enter side: ";
        cin >> side;
    }

    // Return area
    float area()
    {
        return side * side;
    }

    // Return perimeter
    float perimeter()
    {
        return 4 * side;
    }

    // Display results
    void display()
    {
        cout << "\nArea = " << area() << endl;
        cout << "Perimeter = " << perimeter() << endl;
    }
};

int main()
{
    Square s;      // Create object

    s.input();
    s.display();

    return 0;
}