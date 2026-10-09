// Combine bills with + and compare their total amounts with >
#include <iostream>
using namespace std;
class Bill {
    int items; double amount;
public:
    Bill(int n=0,double a=0) : items(n),amount(a) {}
    Bill operator+(const Bill& b) const { return Bill(items+b.items,amount+b.amount); }
    bool operator>(const Bill& b) const { return amount>b.amount; }
    void display() const { cout << "Items: " << items << ", Total amount: " << amount << '\n'; }
};
int main() {
    int n1,n2; double a1,a2;
    cout << "Enter item count and amount for bill 1: "; cin >> n1 >> a1;
    cout << "Enter item count and amount for bill 2: "; cin >> n2 >> a2;
    Bill b1(n1,a1),b2(n2,a2),combined=b1+b2;
    cout << "Bill 1: "; b1.display();
    cout << "Bill 2: "; b2.display();
    cout << "Combined bill: "; combined.display();
    if(b1>b2) cout << "Bill 1 has the higher total.\n";
    else if(b2>b1) cout << "Bill 2 has the higher total.\n";
    else cout << "Both bills have equal totals.\n";
}
