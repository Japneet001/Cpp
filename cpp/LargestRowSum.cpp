#include <iostream>
#include <climits>
using namespace std;

// Largest Row Sum
void LargestRowSum(int arr[][3], int rows, int cols)
{
    int maxSum = INT_MIN;
    int rowNum = -1;
    for (int row = 0; row < rows; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxSum)
        {
            rowNum = row;
            maxSum = sum;
        }
    }
    cout << "The " << rowNum << " has the maximum sum of " << maxSum << " in the given matrix";
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
    LargestRowSum(arr, rows, 3);
    return 0;
}