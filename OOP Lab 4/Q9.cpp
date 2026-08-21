#include <iostream>
#include <string>
using namespace std;

class WalletManager;

class DigitalWallet
{
private:
    string userName;
    float walletBalance;
    bool walletStatus;
    string ny;

public:

    // Constructor to initialize wallet details
    DigitalWallet()
    {   
        cout << "Enter username  : ";
        cin >> userName;
        cout << "Enter Account Balance  : ";
        cin >> walletBalance;
        cout <<  "Enter if service is active(Y/N)  : ";
        cin >> ny;
        if (ny=="Y")
            walletStatus = true;
        else 
            walletStatus = false;
    }

    // Declaring WalletManager as a friend class
    friend class WalletManager;
};

class WalletManager
{
public:

    // Function to display wallet details
    void displayDetails(DigitalWallet &w)
    {
        cout << "\n========== DIGITAL WALLET ==========" << endl;

        cout << "User Name      : " << w.userName << endl;
        cout << "Wallet Balance : Rs. " << w.walletBalance << endl;

        if (w.walletStatus)
            cout << "Wallet Status  : Active" << endl;
        else
            cout << "Wallet Status  : Disabled" << endl;
    }

    // Function to add money to the wallet
    void addMoney(DigitalWallet &w, float amount)
    {
        if (w.walletStatus)
        {
            w.walletBalance += amount;
            cout << "\nRs. " << amount << " added successfully." << endl;
        }
        else
        {
            cout << "\nWallet is disabled. Money cannot be added." << endl;
        }
    }

    // Function to deduct money from the wallet
    void deductMoney(DigitalWallet &w, float amount)
    {
        if (!w.walletStatus)
        {
            cout << "\nWallet is disabled." << endl;
        }
        else if (amount <= w.walletBalance)
        {
            w.walletBalance -= amount;
            cout << "\nRs. " << amount << " deducted successfully." << endl;
        }
        else
        {
            cout << "\nInsufficient balance." << endl;
        }
    }

    // Function to disable the wallet
    void disableWallet(DigitalWallet &w)
    {
        w.walletStatus = false;
        cout << "\nWallet has been disabled." << endl;
    }

    // Function to display current wallet status
    void displayStatus(DigitalWallet &w)
    {
        if (w.walletStatus)
            cout << "\nCurrent Wallet Status: Active" << endl;
        else
            cout << "\nCurrent Wallet Status: Disabled" << endl;
    }
};

int main()
{
    DigitalWallet wallet;
    WalletManager manager;
    int wm;

    // Display initial wallet details
    manager.displayDetails(wallet);

    // Adding money
    cout << "Enter amount of money to be added to the wallet  : ";
    cin >> wm;
    manager.addMoney(wallet, wm);

    // Deducting money
    cout << "Enter amount of money to be dedctued from the wallet  : ";
    cin >> wm;
    manager.deductMoney(wallet, wm);

    // Displaying updated details
    manager.displayDetails(wallet);

    // Disabling wallet
    manager.disableWallet(wallet);

    // Checking wallet status
    manager.displayStatus(wallet);

    return 0;
}