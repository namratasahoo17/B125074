#include <iostream>
using namespace std;

class SensorGrid {
    int n;
    double *temp;

public:
    SensorGrid(int size) {
        n = size;
        temp = new double[n];
    }

    ~SensorGrid() {
        delete[] temp;
    }

    void enter() {
        for (int i = 0; i < n; i++)
            cin >> temp[i];
    }

    void display() {
        for (int i = 0; i < n; i++)
            cout << temp[i] << " ";
        cout << endl;
    }

    void replaceReading(int pos, double value) {
        if (pos >= 1 && pos <= n)
            temp[pos - 1] = value;
        else
            cout << "Invalid position." << endl;
    }

    double average() {
        double sum = 0;

        for (int i = 0; i < n; i++)
            sum += temp[i];

        return sum / n;
    }

    friend void compare(SensorGrid &, SensorGrid &);
};

void compare(SensorGrid &a, SensorGrid &b) {
    double avg1 = a.average();
    double avg2 = b.average();

    if (avg1 > avg2)
        cout << "First grid has greater average: " << avg1 << endl;
    else if (avg2 > avg1)
        cout << "Second grid has greater average: " << avg2 << endl;
    else
        cout << "Both grids have equal average." << endl;
}

int main() {
    int n1, n2, pos;
    double value;

    cout << "Enter number of readings in grid 1: ";
    cin >> n1;

    SensorGrid *g1 = new SensorGrid(n1);

    cout << "Enter readings for grid 1: ";
    g1->enter();

    cout << "Enter number of readings in grid 2: ";
    cin >> n2;

    SensorGrid *g2 = new SensorGrid(n2);

    cout << "Enter readings for grid 2: ";
    g2->enter();

    cout << "\nGrid 1: ";
    g1->display();

    cout << "Grid 2: ";
    g2->display();

    cout << "\nEnter position and new temperature for grid 1: ";
    cin >> pos >> value;

    g1->replaceReading(pos, value);

    cout << "Grid 1 after replacement: ";
    g1->display();

    compare(*g1, *g2);

    delete g1;
    delete g2;

    return 0;
}