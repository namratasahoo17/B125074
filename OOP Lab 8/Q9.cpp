
#include <iostream>
#include <iomanip>
using namespace std;

// Base class
class BackupPolicy {
public:
    // Virtual function to calculate backup storage
    virtual double calculateStorage(double dataSize) {
        return 0.0;
    }

    // Virtual destructor
    virtual ~BackupPolicy() {
    }
};

// Derived class for full backup
class FullBackup : public BackupPolicy {
public:
    // Override the storage calculation function
    double calculateStorage(double dataSize) override {
        // Full backup requires 100% of original data
        return dataSize;
    }
};

// Derived class for incremental backup
class IncrementalBackup : public BackupPolicy {
public:
    // Override the storage calculation function
    double calculateStorage(double dataSize) override {
        // Incremental backup stores 25% of data
        // An additional fixed overhead of 50 MB is added
        return (dataSize * 0.25) + 50;
    }
};

int main() {
    double dataSize;

    // Accept original data size
    cout << "Enter data size in MB: ";
    cin >> dataSize;

    // Create objects of both backup policies
    FullBackup full;
    IncrementalBackup incremental;

    // Create base class pointer
    BackupPolicy* ptr;

    cout << fixed << setprecision(2);

    cout << "\n----- DATA BACKUP STORAGE DETAILS -----\n";

    // Calculate full backup storage
    ptr = &full;
    cout << "Full Backup Required Storage        : "
         << ptr->calculateStorage(dataSize)
         << " MB" << endl;

    // Calculate incremental backup storage
    ptr = &incremental;
    cout << "Incremental Backup Required Storage : "
         << ptr->calculateStorage(dataSize)
         << " MB" << endl;

    return 0;
}
