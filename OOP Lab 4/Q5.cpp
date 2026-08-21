#include <iostream>
#include <string>
using namespace std;

class EventParticipant
{
private:
    string participantName;
    int age;
    string registrationStatus;

public:

    // Function to accept participant details
    void accept()
    {
        cout << "Enter Participant Name: ";
        getline(cin, participantName);

        cout << "Enter Age: ";
        cin >> age;

        cin.ignore();

        cout << "Enter Registration Status: ";
        getline(cin, registrationStatus);
    }

    // Friend function declaration
    friend void verifyParticipant(EventParticipant p);
};

// Friend function to verify participant
void verifyParticipant(EventParticipant p)
{
    cout << "\n========== EVENT REGISTRATION ==========" << endl;

    cout << "Participant Name    : " << p.participantName << endl;
    cout << "Age                 : " << p.age << endl;
    cout << "Registration Status (Active/ Not active) : " << p.registrationStatus << endl;

    // Checking both eligibility conditions
    if (p.age >= 18 && p.registrationStatus == "Active")
    {
        cout << "Eligibility         : Eligible" << endl;
    }
    else
    {
        cout << "Eligibility         : Not Eligible" << endl;
    }
}

int main()
{
    EventParticipant participant;

    // Accepting participant details
    participant.accept();

    // Calling friend function
    verifyParticipant(participant);

    return 0;
}