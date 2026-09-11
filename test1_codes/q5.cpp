#include <iostream>
using namespace std;

class Trip {
    int id, distance;
    double baseFare;

public:
    Trip(int i, int d, double b) {
        id = i;
        distance = d;
        baseFare = b;
    }

    double fare() {
        return baseFare + distance * 10;
    }

    double fare(int waitingTime) {
        return fare() + waitingTime * 2;
    }

    double fare(int waitingTime, int discount) {
        double total = fare(waitingTime);
        return total - total * discount / 100.0;
    }

    friend void compare(Trip &, Trip &);
};

void compare(Trip &a, Trip &b) {
    double f1 = a.fare();
    double f2 = b.fare();

    if (f1 < f2)
        cout << "Trip " << a.id << " is cheaper: " << f1 << endl;
    else if (f2 < f1)
        cout << "Trip " << b.id << " is cheaper: " << f2 << endl;
    else
        cout << "Both trips have the same fare: " << f1 << endl;
}

int main() {
    int id1, distance1, id2, distance2;
    double base1, base2;
    int waitingTime, discount;

    cout << "Enter Trip 1 ID, distance and base fare: ";
    cin >> id1 >> distance1 >> base1;

    cout << "Enter Trip 2 ID, distance and base fare: ";
    cin >> id2 >> distance2 >> base2;

    Trip *t1 = new Trip(id1, distance1, base1);
    Trip *t2 = new Trip(id2, distance2, base2);

    cout << "Enter waiting time for Trip 1: ";
    cin >> waitingTime;
    cout << "Fare with waiting: " << t1->fare(waitingTime) << endl;

    cout << "Enter waiting time and discount for Trip 1: ";
    cin >> waitingTime >> discount;
    cout << "Fare with waiting and discount: "
         << t1->fare(waitingTime, discount) << endl;

    compare(*t1, *t2);

    delete t1;
    delete t2;

    return 0;
}