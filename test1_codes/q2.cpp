#include <iostream>
using namespace std;

class Borrower {
    int id, days;
    double fine;

public:
    Borrower(int i, int d) {
        id = i;
        days = d;
        fine = 0;
    }

    void calculateFine() {
        fine = days * 2.0;
    }

    void calculateFine(double rate) {
        fine = days * rate;
    }

    friend void compare(Borrower &, Borrower &);
};

void compare(Borrower &a, Borrower &b) {
    if (a.fine > b.fine)
        cout << "Borrower " << a.id << " has higher fine: " << a.fine << endl;
    else if (b.fine > a.fine)
        cout << "Borrower " << b.id << " has higher fine: " << b.fine << endl;
    else
        cout << "Both borrowers have equal fine: " << a.fine << endl;
}

int main() {
    int id1, days1, id2, days2;
    double rate;

    cout << "Enter borrower 1 ID and overdue days: ";
    cin >> id1 >> days1;

    cout << "Enter borrower 2 ID and overdue days: ";
    cin >> id2 >> days2;

    Borrower *b1 = new Borrower(id1, days1);
    Borrower *b2 = new Borrower(id2, days2);

    b1->calculateFine();

    cout << "Enter special rate for borrower 2: ";
    cin >> rate;
    b2->calculateFine(rate);

    compare(*b1, *b2);

    delete b1;
    delete b2;

    return 0;
}