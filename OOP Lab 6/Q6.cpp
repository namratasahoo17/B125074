// Compare dates using == and !=
#include <iostream>
using namespace std;
class Date {
    int day, month, year;
public:
    Date(int d,int m,int y) : day(d),month(m),year(y) {}
    bool operator==(const Date& x) const {
        return day==x.day && month==x.month && year==x.year;
    }
    bool operator!=(const Date& x) const { return !(*this==x); }
};
int main() {
    int d1,m1,y1,d2,m2,y2;
    cout << "Enter first date (day month year): "; cin >> d1 >> m1 >> y1;
    cout << "Enter second date (day month year): "; cin >> d2 >> m2 >> y2;
    Date a(d1,m1,y1), b(d2,m2,y2);
    cout << boolalpha << "Equal (==): " << (a==b) << '\n';
    cout << "Not equal (!=): " << (a!=b) << '\n';
}
