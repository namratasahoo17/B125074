#include <iostream>
using namespace std;

//Finds the length of a charecter array
int information(char arr[])
{
    int length = 0;
    while (arr[length] != '\0')
    {
        length++;
    }

    return length;
}

//Counts occurrence of a character in the complete array
int information(char arr[], char ch)
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == ch)
        {
            count++;
        }
    }

    return count;
}

// Counts occurence within the first k positions
int information(char arr[], char ch, int k)
{
    int count = 0;
    for (int i = 0; i < k && arr[i] != '\0'; i++)
    {
        if (arr[i] == ch)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char text[100];
    char ch;
    int k;

    cout << "enter a string: ";
    cin.getline(text, 100);

    cout << "Enter character to count: ";
    cin >> ch;

    cout << "Enter number of positions to check: ";
    cin >> k;

    cout << "\n========== STRING INFORMATION ==========" << endl;

    cout << "Length of string = "
         << information(text) << endl;

    cout << "Total occurrence of '" << ch << "' = "
         << information(text, ch) << endl;

    cout << "Occurrence in first " << k << " positions = "
         << information(text, ch, k) << endl;

    return 0;    
}