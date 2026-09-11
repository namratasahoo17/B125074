#include <iostream>
using namespace std;

class Inventory {
    int playerID, n;
    int *items;

public:
    Inventory(int id, int count) {
        playerID = id;
        n = count;
        items = new int[n]{};
    }

    ~Inventory() {
        delete[] items;
    }

    friend class GameController;
};

class GameController {
public:
    void inspect(Inventory &x) {
        cout << "Player ID: " << x.playerID << endl;
        cout << "Item quantities: ";

        for (int i = 0; i < x.n; i++)
            cout << x.items[i] << " ";

        cout << endl;
    }

    void changeQuantity(Inventory &x, int pos, int qty) {
        if (pos >= 1 && pos <= x.n)
            x.items[pos - 1] = qty;
        else
            cout << "Invalid item position." << endl;
    }
};

int main() {
    int id, n, pos, qty;

    cout << "Enter player ID: ";
    cin >> id;

    cout << "Enter number of items: ";
    cin >> n;

    Inventory *inv = new Inventory(id, n);
    GameController controller;

    cout << "Enter item position and quantity (0 to stop):" << endl;

    while (true) {
        cin >> pos;

        if (pos == 0)
            break;

        cin >> qty;
        controller.changeQuantity(*inv, pos, qty);
    }

    cout << "\nInventory:" << endl;
    controller.inspect(*inv);

    delete inv;

    return 0;
}