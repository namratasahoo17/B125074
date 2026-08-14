#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int employeeID;
    string employeeName;
    float salary;

public:

    // Function to accept employee details
    void accept()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, employeeName);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    // Function to display employee details
    void display()
    {
        cout << "Employee ID   : " << employeeID << endl;
        cout << "Employee Name : " << employeeName << endl;
        cout << "Salary        : " << salary << endl;
    }

    // Function to return salary
    float getSalary()
    {
        return salary;
    }

    // Function to return employee name
    string getName()
    {
        return employeeName;
    }
};

int main()
{
    int n;
    float totalSalary = 0;

    cout << "Enter number of employees: ";
    cin >> n;

    // Dynamically creating an array of Employee objects
    Employee *employees = new Employee[n];

    // Accepting employee details
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Employee " << i + 1 << endl;
        employees[i].accept();
    }

    // Displaying all employee details
    cout << "\n========== EMPLOYEE DETAILS ==========" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        employees[i].display();
    }

    // Finding the employee with the highest salary
    int highestIndex = 0;

    for (int i = 1; i < n; i++)
    {
        if (employees[i].getSalary() > employees[highestIndex].getSalary())
        {
            highestIndex = i;
        }
    }

    // Calculating total salary
    for (int i = 0; i < n; i++)
    {
        totalSalary += employees[i].getSalary();
    }

    // Calculating average salary
    float averageSalary = totalSalary / n;

    cout << "\n----- Highest Salary Employee -----" << endl;
    employees[highestIndex].display();

    cout << "\nAverage Salary = " << averageSalary << endl;

    // Releasing dynamically allocated memory
    delete[] employees;

    return 0;
}