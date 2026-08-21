#include <iostream>
#include <string>
using namespace std;

class UserAccount
{
private:
    string username;
    int loginAttempts;
    string accountStatus;

public:

    // Function to accept account details
    void accept()
    {
        cout << "Enter Username: ";
        getline(cin, username);

        cout << "Enter Number of Unsuccessful Login Attempts: ";
        cin >> loginAttempts;
    }

    // Friend function declaration
    friend void checkAccount(UserAccount u);
};

// Friend function to check account status
void checkAccount(UserAccount u)
{
    cout << "\n========== ACCOUNT DETAILS ==========" << endl;

    cout << "Username        : " << u.username << endl;
    cout << "Login Attempts  : " << u.loginAttempts << endl;

    // Checking the number of unsuccessful attempts
    if (u.loginAttempts >= 3)
    {   
        u.accountStatus = "Locked";
        cout << "Account Status    : " << u.accountStatus << endl;
    }
    else
    {   
        u.accountStatus = "Active";
        cout << "Final Status    : " << u.accountStatus << endl;
    }
}

int main()
{
    UserAccount user;

    // Accepting account details
    user.accept();

    // Calling the friend function
    checkAccount(user);

    return 0;
}