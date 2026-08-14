#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int n;
    int vowels = 0, consonants = 0;
    int digits = 0, spaces = 0;

    cout << "Enter the size of character array: ";
    cin >> n;

    // Dynamically allocating character array
    char *str = new char[n];

    cin.ignore();

    cout << "Enter a string: ";
    cin.getline(str, n);

    // Checking every character
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if (isalpha(ch))
        {
            // Checking for vowels
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' ||
                ch == 'O' || ch == 'U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        else if (isdigit(ch))
        {
            digits++;
        }
        else if (ch == ' ')
        {
            spaces++;
        }
    }

    // Displaying the result
    cout << "\nNumber of vowels     = " << vowels << endl;
    cout << "Number of consonants = " << consonants << endl;
    cout << "Number of digits     = " << digits << endl;
    cout << "Number of spaces     = " << spaces << endl;

    // Releasing dynamically allocated memory
    delete[] str;

    return 0;
}