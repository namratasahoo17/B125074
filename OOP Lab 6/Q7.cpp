#include <iostream>
using namespace std;

class InventoryItem {
    int id, quantity;
    double price;

public:
    InventoryItem(int i, double p, int q)
        : id(i), quantity(q), price(p) {}

    bool compatible(const InventoryItem& x) const {
        return id == x.id && price == x.price;
    }

    InventoryItem operator+(const InventoryItem& x) const {
        return InventoryItem(id, price, quantity + x.quantity);
    }

    void display() const {
        cout << "Product ID: " << id
             << ", Unit price: " << price
             << ", Quantity: " << quantity << '\n';
    }
};

int main() {
    int id1, q1, id2, q2;
    double p1, p2;

    cout << "Enter item 1 (ID price quantity): ";
    cin >> id1 >> p1 >> q1;

    cout << "Enter item 2 (ID price quantity): ";
    cin >> id2 >> p2 >> q2;

    InventoryItem a(id1, p1, q1);
    InventoryItem b(id2, p2, q2);

    cout << "Item 1: ";
    a.display();

    cout << "Item 2: ";
    b.display();

    if (a.compatible(b)) {
        InventoryItem combined = a + b;
        cout << "Combination result: ";
        combined.display();
    } else {
        cout << "Items are incompatible; they cannot be combined.\n";
    }

    return 0;
}