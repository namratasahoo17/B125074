#include <iostream>
#include <string>
using namespace std;

// Class to manage mobile recharge details
class MobileRecharge
{
private:
    string mobileNumber, customerName;
    float balance;

public:
    // Accept customer details
    void input()
    {
        cout << "Enter Mobile Number: ";
        cin >> mobileNumber;
        cin.ignore();

        cout << "Enter Customer Name: ";
        getline(cin, customerName);

        cout << "Enter Current Balance: ";
        cin >> balance;
    }

    // Recharge the balance
    void recharge()
    {
        float amount;

        cout << "Enter Recharge Amount: ";
        cin >> amount;

        balance += amount;
    }

    // Deduct balance for selected recharge plan
    void deductBalance()
    {
        float planCost;

        cout << "Enter Recharge Plan Cost: ";
        cin >> planCost;

        if (planCost <= balance)
        {
            balance -= planCost;
            cout << "Recharge Successful!" << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    // Display updated customer details
    void display()
    {
        cout << "\n----- Customer Details -----" << endl;
        cout << "Customer Name : " << customerName << endl;
        cout << "Mobile Number : " << mobileNumber << endl;
        cout << "Available Balance : " << balance << endl;
    }
};

int main()
{
    MobileRecharge m;   // Create object

    m.input();
    m.recharge();
    m.deductBalance();
    m.display();

    return 0;
}