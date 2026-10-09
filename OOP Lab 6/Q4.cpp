// Unary minus returns a new object; original balance stays unchanged
#include <iostream>
using namespace std;
class AccountBalance {
    double balance;
public:
    AccountBalance(double b=0) : balance(b) {}
    AccountBalance operator-() const { return AccountBalance(-balance); }
    void display() const { cout << balance; }
};
int main() {
    double amount; cout << "Enter account balance: "; cin >> amount;
    AccountBalance original(amount), adjusted = -original;
    cout << "Original balance: "; original.display();
    cout << "\nNegated balance: "; adjusted.display();
    cout << "\nOriginal remains: "; original.display(); cout << '\n';
}
