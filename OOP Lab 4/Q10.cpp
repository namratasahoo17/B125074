#include <iostream>
#include <string>
using namespace std;

class AttendanceManager;

class Classroom
{
private:
    string className;
    int totalStudents;
    int presentStudents;
    bool attendanceStatus;
    string ny;

public:

    // Constructor to initialize classroom details
    Classroom()
    {   
        cout << "Enter Class Name  : ";
        cin >> className;
        cout << "Enter Total number of students  : ";
        cin >> totalStudents;
        cout << "Total number of students present  : ";
        cin >> presentStudents;
        cout <<  "Enter if service is active(Y/N)  : ";
        cin >> ny;
        if (ny=="Y")
            attendanceStatus = true;
        else 
            attendanceStatus = false;
    }

    // Declaring AttendanceManager as a friend class
    friend class AttendanceManager;
};

class AttendanceManager
{
public:

    // Function to display classroom information
    void displayInfo(Classroom &c)
    {
        cout << "\n========== CLASSROOM INFORMATION ==========" << endl;

        cout << "Class Name          : " << c.className << endl;
        cout << "Total Students      : " << c.totalStudents << endl;
        cout << "Present Students    : " << c.presentStudents << endl;

        if (c.attendanceStatus)
            cout << "Attendance Status   : Completed" << endl;
        else
            cout << "Attendance Status   : Not Completed" << endl;
    }

    // Function to update the number of present students
    void updatePresentStudents(Classroom &c, int present)
    {
        if (present >= 0 && present <= c.totalStudents)
        {
            c.presentStudents = present;
            cout << "\nPresent student count updated." << endl;
        }
        else
        {
            cout << "\nInvalid number of present students." << endl;
        }
    }

    // Function to mark attendance as completed
    void markAttendanceCompleted(Classroom &c)
    {
        c.attendanceStatus = true;
        cout << "\nAttendance has been marked as completed." << endl;
    }

    // Function to display attendance status
    void displayAttendanceStatus(Classroom &c)
    {
        if (c.attendanceStatus)
            cout << "\nAttendance Status: Completed" << endl;
        else
            cout << "\nAttendance Status: Not Completed" << endl;
    }

    // Function to calculate and display absent students
    void displayAbsentStudents(Classroom &c)
    {
        int absentStudents = c.totalStudents - c.presentStudents;

        cout << "\nAbsent Students = " << absentStudents << endl;
    }
};

int main()
{
    Classroom classroom;
    AttendanceManager manager;

    // Display initial classroom information
    manager.displayInfo(classroom);

    // Updating present students
    manager.updatePresentStudents(classroom, 52);

    // Marking attendance as completed
    manager.markAttendanceCompleted(classroom);

    // Displaying attendance status
    manager.displayAttendanceStatus(classroom);

    // Calculating absent students
    manager.displayAbsentStudents(classroom);

    // Displaying final classroom information
    manager.displayInfo(classroom);

    return 0;
}