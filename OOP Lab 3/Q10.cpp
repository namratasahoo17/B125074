#include <iostream>
using namespace std;

int main()
{
    int m, n;

    cout << "Enter number of rows: ";
    cin >> m;

    cout << "Enter number of columns: ";
    cin >> n;

    // Dynamically allocating row pointers for first matrix
    int **matrix1 = new int*[m];

    // Dynamically allocating each row
    for (int i = 0; i < m; i++)
    {
        matrix1[i] = new int[n];
    }

    // Dynamically allocating row pointers for second matrix
    int **matrix2 = new int*[m];

    // Dynamically allocating each row
    for (int i = 0; i < m; i++)
    {
        matrix2[i] = new int[n];
    }

    // Taking elements of first matrix
    cout << "\nEnter elements of first matrix:" << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    // Taking elements of second matrix
    cout << "\nEnter elements of second matrix:" << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    // Displaying the addition result
    cout << "\nMatrix Addition:" << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix1[i][j] + matrix2[i][j] << "\t";
        }

        cout << endl;
    }

    // Deallocating each row of first matrix
    for (int i = 0; i < m; i++)
    {
        delete[] matrix1[i];
    }

    // Deallocating row pointer array of first matrix
    delete[] matrix1;

    // Deallocating each row of second matrix
    for (int i = 0; i < m; i++)
    {
        delete[] matrix2[i];
    }

    // Deallocating row pointer array of second matrix
    delete[] matrix2;

    return 0;
}