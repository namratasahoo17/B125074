#include <iostream>
#include <cctype>
using namespace std;

// Checks whether an integer is positive, negative or zero
void check(int number)
{
    if (number > 0)
        cout << "The number is Positive." << endl;
    else if (number < 0)
        cout << "The number is Negative." << endl;
    else
        cout << "The number is Zero." << endl;
}

// Checks whether a character is uppercase or lowercase
void check(char ch)
{
    if (isupper(ch))
        cout << "The character is Uppercase." << endl;
    else if (islower(ch))
        cout << "The character is Lowercase." << endl;
    else
        cout << "The character is not a letter." << endl;
}

// Searches for a character in a character array
void check(char arr[], char searchChar)
{
    bool found = false;

    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == searchChar)
        {
            cout << "Character found at position "
                 << i + 1 << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "Character not found in the array." << endl;
    }
}

int main()
{
    int number;
    char ch;
    char text[100];
    char searchChar;

    cout << "Enter an integer: ";
    cin >> number;

    cout << "Enter a character: ";
    cin >> ch;

    cin.ignore();

    cout << "Enter a string: ";
    cin.getline(text, 100);

    cout << "Enter character to search: ";
    cin >> searchChar;

    cout << "\n========== CHARACTER ANALYZER ==========" << endl;

    // Calling the integer version
    check(number);

    // Calling the character version
    check(ch);

    // Calling the character array version
    check(text, searchChar);

    return 0;
}