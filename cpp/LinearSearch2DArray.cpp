#include <iostream>
using namespace std;

// Linear Search
bool isPresent(int arr[][3], int target, int rows, int col)
{
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    // Variable to store number of rows
    int rows;
    cout << "Enter Number of Rows: ";
    cin >> rows;

    // create 2 d array
    int arr[rows][3];
    cout << "Enter the elements " << endl;
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    // print
    cout << "Printing the array " << endl;
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    cout << " Enter the element to search " << endl;
    int target;
    cin >> target;

    if (isPresent(arr, target, rows, 3))
    {
        cout << " Element found " << endl;
    }
    else
    {
        cout << " Not Found" << endl;
    }

    return 0;
}