
#include <iostream>
#include <string>
using namespace std;

// Base class
class Candidate {
protected:
    int candidateID;
    double attendance;

public:
    // Constructor to initialize candidate information
    Candidate(int id, double att) {
        candidateID = id;
        attendance = att;
    }
};

// First derived class
class RegularCandidate : public Candidate {
public:
    // Constructor calls the base class constructor
    RegularCandidate(int id, double att)
        : Candidate(id, att) {
    }

    // Check eligibility for a regular candidate
    void checkEligibility() {
        cout << "\nRegular Candidate Details\n";
        cout << "Candidate ID : " << candidateID << endl;
        cout << "Attendance   : " << attendance << "%" << endl;

        // Minimum attendance required is 75%
        if (attendance >= 75) {
            cout << "Status       : Eligible for examination"
                 << endl;
        } else {
            cout << "Status       : Not eligible for examination"
                 << endl;
        }
    }
};

// Second derived class
class ReappearCandidate : public Candidate {
public:
    // Constructor calls the base class constructor
    ReappearCandidate(int id, double att)
        : Candidate(id, att) {
    }

    // Check eligibility for a reappear candidate
    void checkEligibility() {
        cout << "\nReappear Candidate Details\n";
        cout << "Candidate ID : " << candidateID << endl;
        cout << "Attendance   : " << attendance << "%" << endl;

        // Minimum attendance required is 60%
        if (attendance >= 60) {
            cout << "Status       : Eligible for examination"
                 << endl;
        } else {
            cout << "Status       : Not eligible for examination"
                 << endl;
        }
    }
};

int main() {
    int regularID, reappearID;
    double regularAttendance, reappearAttendance;

    // Input details of regular candidate
    cout << "Enter Regular Candidate ID: ";
    cin >> regularID;

    cout << "Enter Regular Candidate Attendance: ";
    cin >> regularAttendance;

    // Input details of reappear candidate
    cout << "\nEnter Reappear Candidate ID: ";
    cin >> reappearID;

    cout << "Enter Reappear Candidate Attendance: ";
    cin >> reappearAttendance;

    // Create objects of both derived classes
    RegularCandidate regular(regularID, regularAttendance);

    ReappearCandidate reappear(reappearID, reappearAttendance);

    // Check eligibility separately
    regular.checkEligibility();
    reappear.checkEligibility();

    return 0;
}
