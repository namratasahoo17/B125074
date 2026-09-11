#include <iostream>
using namespace std;

class ParkingFloor {
    int floorNo, slots;
    bool *occupied;

public:
    ParkingFloor(int f, int n) {
        floorNo = f;
        slots = n;
        occupied = new bool[slots]{};
    }

    ~ParkingFloor() {
        delete[] occupied;
    }

    void reserve(int pos) {
        if (pos >= 1 && pos <= slots && !occupied[pos - 1]) {
            occupied[pos - 1] = true;
            cout << "Slot reserved.\n";
        } else {
            cout << "Invalid or occupied slot.\n";
        }
    }

    void reserve(int start, int count) {
        if (start < 1 || start + count - 1 > slots) {
            cout << "Invalid group.\n";
            return;
        }

        for (int i = start; i < start + count; i++) {
            if (occupied[i - 1]) {
                cout << "Some slots are occupied.\n";
                return;
            }
        }

        for (int i = start; i < start + count; i++)
            occupied[i - 1] = true;

        cout << "Group reserved.\n";
    }

    void display() {
        cout << "Floor " << floorNo << ": ";
        for (int i = 0; i < slots; i++)
            cout << (occupied[i] ? "X " : "O ");
        cout << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of floors: ";
    cin >> n;

    ParkingFloor **floors = new ParkingFloor*[n];

    for (int i = 0; i < n; i++) {
        int slots;
        cout << "Enter number of slots on floor " << i + 1 << ": ";
        cin >> slots;
        floors[i] = new ParkingFloor(i + 1, slots);
    }

    int floor, choice, start, count;

    cout << "Enter floor number: ";
    cin >> floor;

    cout << "1. Reserve one slot\n";
    cout << "2. Reserve consecutive slots\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter slot number: ";
        cin >> start;
        floors[floor - 1]->reserve(start);
    }
    else if (choice == 2) {
        cout << "Enter starting slot and number of slots: ";
        cin >> start >> count;
        floors[floor - 1]->reserve(start, count);
    }

    cout << "\nParking Status:\n";
    for (int i = 0; i < n; i++)
        floors[i]->display();

    for (int i = 0; i < n; i++)
        delete floors[i];

    delete[] floors;

    return 0;
}