// Prefix returns updated value; postfix returns old value
#include <iostream>
using namespace std;
class Score {
    int value;
public:
    Score(int v=0) : value(v) {}
    Score& operator++() { ++value; return *this; } // Prefix ++obj
    Score operator++(int) { Score old=*this; value++; return old; } // Postfix obj++
    void display() const { cout << value; }
};
int main() {
    int start; cout << "Enter starting score: "; cin >> start;
    Score a(start), prefixResult = ++a;
    cout << "Prefix result: "; prefixResult.display();
    cout << "\nOriginal after prefix: "; a.display();
    Score b(start), postfixResult = b++;
    cout << "\nPostfix result: "; postfixResult.display();
    cout << "\nOriginal after postfix: "; b.display(); cout << '\n';
}
