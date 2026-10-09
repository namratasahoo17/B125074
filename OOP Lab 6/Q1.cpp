// Fraction addition and subtraction
#include <iostream>
#include <numeric>
using namespace std;
class Fraction {
    int num, den;
    void simplify() {
        int g = gcd(num, den);
        num /= g; den /= g;
        if (den < 0) { num = -num; den = -den; }
    }
public:
    Fraction(int n=0, int d=1) : num(n), den(d) { simplify(); }
    Fraction operator+(const Fraction& f) const {
        return Fraction(num*f.den + f.num*den, den*f.den);
    }
    Fraction operator-(const Fraction& f) const {
        return Fraction(num*f.den - f.num*den, den*f.den);
    }
    void display() const { cout << num << "/" << den; }
};
int main() {
    int n1,d1,n2,d2;
    cout << "Enter numerator and denominator of fraction 1: "; cin >> n1 >> d1;
    cout << "Enter numerator and denominator of fraction 2: "; cin >> n2 >> d2;
    if (d1==0 || d2==0) { cout << "Denominator cannot be zero.\n"; return 1; }
    Fraction a(n1,d1), b(n2,d2);
    cout << "The simplified numbers are "; a.display(); cout << " "; b.display();
    cout << "Sum: "; (a+b).display();
    cout << "\nDifference: "; (a-b).display(); cout << '\n';
}
