// Compare temperatures and negate one without changing the original
#include <iostream>
using namespace std;
class Temperature {
    double celsius;
public:
    Temperature(double c=0) : celsius(c) {}
    bool operator>(const Temperature& t) const { return celsius>t.celsius; }
    bool operator<(const Temperature& t) const { return celsius<t.celsius; }
    Temperature operator-() const { return Temperature(-celsius); }
    void display() const { cout << celsius << " C"; }
};
int main() {
    double c1,c2; cout << "Enter two temperatures in Celsius: "; cin >> c1 >> c2;
    Temperature a(c1),b(c2);
    cout << boolalpha << "First > second: " << (a>b) << '\n';
    cout << "First < second: " << (a<b) << '\n';
    Temperature negated=-a;
    cout << "Negated first: "; negated.display();
    cout << "\nOriginal first: "; a.display(); cout << '\n';
}
