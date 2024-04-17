#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Variable to store number of rows
    int rows;
    cout << "Enter Number of Rows: ";
    cin >> rows;

    // Declaration of 2D Array
    int mat[rows][3];

    // Input elements into the array (Row wise input)
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat[i][j];
        }
    }

    // Input elements into the array (Column wise input)
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cin >> mat[j][i];
        }
    }

    // Printing the Array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl; // Move to the next line after printing each row
    }
    return 0;
}
