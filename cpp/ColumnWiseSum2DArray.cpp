#include <iostream>
using namespace std;

// Column Wise Sum
void ColWiseSum(int arr[][3], int rows, int cols)
{
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
}

int main()
{
    // Variable to store number of rows
    int rows;
    cout << "Enter Number of Rows: ";
    cin >> rows;

    // create 2 d array
    cout << "Enter the elements " << endl;
    int arr[rows][3];
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    // print
    cout << "Printing the array " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    cout << "Column Wise Sum of the given matrix is: ";
    ColWiseSum(arr, rows, 3);
    return 0;
}