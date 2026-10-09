// Add two durations; normalize minutes to less than 60
#include <iostream>
using namespace std;
class Duration {
    int hours, minutes;
public:
    Duration(int h=0, int m=0) : hours(h + m/60), minutes(m%60) {}
    Duration operator+(const Duration& d) const {
        return Duration(hours+d.hours, minutes+d.minutes);
    }
    void display() const { cout << hours << " hours " << minutes << " minutes"; }
};
int main() {
    int h1,m1,h2,m2;
    cout << "Enter first duration (hours minutes): "; cin >> h1 >> m1;
    cout << "Enter second duration (hours minutes): "; cin >> h2 >> m2;
    Duration a(h1,m1), b(h2,m2);
    cout << "First: "; a.display();
    cout << "\nSecond: "; b.display();
    cout << "\nTotal: "; (a+b).display(); cout << '\n';
}
