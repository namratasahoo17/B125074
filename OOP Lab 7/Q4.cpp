
#include <iostream>
using namespace std;

// First base class
class LibraryAccess {
protected:
    int borrowedBooks;

public:
    // Constructor to initialize borrowed books
    LibraryAccess(int books) {
        borrowedBooks = books;
    }
};

// Second base class
class LaboratoryAccess {
protected:
    int pendingSubmissions;

public:
    // Constructor to initialize pending submissions
    LaboratoryAccess(int pending) {
        pendingSubmissions = pending;
    }
};

// Derived class inheriting from both base classes
class StudentAccess : public LibraryAccess,
                      public LaboratoryAccess {
public:
    // Constructor initializes both base classes
    StudentAccess(int books, int pending)
        : LibraryAccess(books),
          LaboratoryAccess(pending) {
    }

    // Function to determine student's access status
    void checkAccess() {
        cout << "\n----- STUDENT RESOURCE ACCESS -----\n";

        cout << "Books Borrowed         : "
             << borrowedBooks << endl;

        cout << "Pending Lab Submissions: "
             << pendingSubmissions << endl;

        // Check both access conditions
        if (borrowedBooks <= 5 &&
            pendingSubmissions == 0) {

            cout << "Access Status          : FULL ACCESS GRANTED"
                 << endl;

        } else {
            cout << "Access Status          : FULL ACCESS DENIED"
                 << endl;
        }
    }
};

int main() {
    int books, pending;

    // Accept student resource information
    cout << "Enter number of borrowed books: ";
    cin >> books;

    cout << "Enter number of pending lab submissions: ";
    cin >> pending;

    // Create object of derived class
    StudentAccess student(books, pending);

    // Check and display access status
    student.checkAccess();

    return 0;
}
