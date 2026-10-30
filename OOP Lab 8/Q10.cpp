
#include <iostream>
#include <iomanip>
using namespace std;

// Base class
class Scholarship {
public:
    // Virtual function to calculate scholarship award
    virtual double calculateAward(double marks,
                                  double familyIncome) {
        return 0.0;
    }

    // Virtual destructor
    virtual ~Scholarship() {
    }
};

// Derived class for merit-based scholarship
class MeritScholarship : public Scholarship {
public:
    // Override the base class function
    double calculateAward(double marks,
                          double familyIncome) override {

        // Award Rs. 20,000 for marks of 90 or above
        if (marks >= 90) {
            return 20000;
        }

        // Award Rs. 10,000 for marks of 80 or above
        else if (marks >= 80) {
            return 10000;
        }

        // No scholarship for marks below 80
        else {
            return 0;
        }
    }
};

// Derived class for need-based scholarship
class NeedBasedScholarship : public Scholarship {
public:
    // Override the base class function
    double calculateAward(double marks,
                          double familyIncome) override {

        // Check both income and academic performance
        if (familyIncome < 200000 && marks >= 70) {
            return 25000;
        }

        // No scholarship if either condition is not satisfied
        else {
            return 0;
        }
    }
};

int main() {
    double marks, familyIncome;

    // Accept student academic and financial details
    cout << "Enter student's marks: ";
    cin >> marks;

    cout << "Enter annual family income (Rs.): ";
    cin >> familyIncome;

    // Create objects of both scholarship classes
    MeritScholarship merit;
    NeedBasedScholarship need;

    // Create a base class pointer
    Scholarship* ptr;

    cout << fixed << setprecision(2);

    cout << "\n----- SCHOLARSHIP DETAILS -----\n";

    // Calculate merit-based scholarship
    ptr = &merit;

    double meritAward =
        ptr->calculateAward(marks, familyIncome);

    cout << "Merit Scholarship Award      : Rs. "
         << meritAward << endl;

    // Calculate need-based scholarship
    ptr = &need;

    double needAward =
        ptr->calculateAward(marks, familyIncome);

    cout << "Need-Based Scholarship Award : Rs. "
         << needAward << endl;

    return 0;
}
