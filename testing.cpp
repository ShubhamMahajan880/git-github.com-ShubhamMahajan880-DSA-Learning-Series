#include <bits/stdc++.h>
// #include <iostream>
// #include<algorithm>
// #include<climits>
// #include<string>
// #include<cctype>
// #include<vector>
// #include<set>
// #include<iomanip>
// #include<cmath>
// #include<list>
// #include<iterator>
using namespace std;

void printMatrix(int matrix[][10], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "- - - - - - - - - - - - - -" << endl;
}

void TransposedMatrix(int matrix[][10], int &n, int &m)
{
    if (n != m)
    {
        int TraspoMatrix[10][10];

        // Creating transpose
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                TraspoMatrix[j][i] = matrix[i][j];
            }
        }

        // Copying back to matrix
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                matrix[i][j] = TraspoMatrix[i][j];
            }
        }

        swap(n, m); // Update dimensions

        cout << "So, the Transpose Matrix we have is:" << endl;
        printMatrix(matrix, n, m);
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++) // fix: avoid redundant swaps
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        cout << "So, the Transpose Matrix we have is:" << endl;
        printMatrix(matrix, n, m);
    }
}

void MatrixRotation(int matrix[][10], int n, int m)
{

    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < m; j++)
        {
            swap(matrix[i][j], matrix[n - i - 1][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i], matrix[i] + n);
    }

    cout << "matrix, after180 degree rotation is - " << endl;
    printMatrix(matrix, n, m);
}
// ____________ ____________
int CWRotation(int matrix[][10], int n, int m)
{
    cout << "Method : 1 - ClockWise(RIGHT) 90 Degree Rotation " << endl;
    // Step 1: Transpose
    TransposedMatrix(matrix, n, m);

    // Now for CW 90. rotation - using Reverse
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i], matrix[i] + n);
    }
    cout << "Using Reverse Method -  the 90 CW Rotation of arraty is - " << endl;
    printMatrix(matrix, n, m);
    return 0;
}
// OR -------------------

int CW2Rotation(int matrix[][10], int n, int m)
{
    cout << "Method : 2 - ClockWise(RIGHT) 90 Degree Rotation " << endl;
    TransposedMatrix(matrix, n, m); // ✅ Now matrix is updated in-place

    for (int i = 0; i < n; i++) // ✅ Loop over rows after transpose
    {
        for (int j = 0; j < m / 2; j++)
        {
            swap(matrix[i][j], matrix[i][m - j - 1]);
        }
    }

    cout << "Hence the 90 CW Rotation of array is:" << endl;
    printMatrix(matrix, n, m);
    return 0;
}
// ____________ ____________
void ACWRotation(int matrix[][10], int n, int m)
{
    cout << "Method : 1 - AntiClockWise(LEFT) 90 Degree Rotation " << endl;
    // Step -1 - Taking Tranpose First
    // TransposedMatrix(matrix, n, m);

    // Step -2 - Using Reverse Column
    cout << "📌🙋🏻‍♂️Reverse Column is  not work same as reverse Row. It always need to do it manually by swapping columns and assigning indexing" << endl;
}
// OR// -------------------
void ACW2Rotation(int matrix[][10], int n, int m)
{
    cout << "Method : 2 - AntiClockWise(LEFT) 90 Degree Rotation " << endl;
    // Step -1 - Taking Transpose First
    TransposedMatrix(matrix, n, m);

    // Step - 2 - Using Swapping Rowsa Method -
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < m; j++)
        {
            swap(matrix[i][j], matrix[n - i - 1][j]);
        }
    }
    cout << "Hence, using SWapping Rows Method -  the 90 ACW Rotation of arraty is - " << endl;
    printMatrix(matrix, n, m);
}

int main()
{
    int n, m;
    cout << "Size of array for row & col respectively -  - " << endl;
    cin >> n >> m;
    int matrix[10][10];
    cout << "Print the Matrix Elements - " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "Entered Matrices is -" << endl;
    printMatrix(matrix, n, m);
    // TransposedMatrix(matrix, n, m);
    // MatrixRotation(matrix, n, m);
    // For 180 Degree Rotation -

    // Any one from the below can be called for 90 Degree Right Rotation -
    // CWRotation(matrix, n, m);
    // CW2Rotation(matrix, n, m);

    // Only Swapping ROws exist for ACW Rotation - not the column reverse - it need to do manually
    // ACWRotation(matrix, n, m);
    ACW2Rotation(matrix, n, m);

    return 0;

    /*
    Size of array for row & col respectively -  -
    3 3
    Print the Matrix Elements -
    1 2 3 4 5 6 7 8 9
    Entered Matrices is -
    1 2 3
    4 5 6
    7 8 9
    - - - - - - - - - - - - - -
    matrix, after180 degree rotation is -
    9 8 7
    6 5 4
    3 2 1
    - - - - - - - - - - - - - -
    Method : 1 - ClockWise(RIGHT) 90 Degree Rotation
    Using Reverse Method -  the 90 CW Rotation of arraty is -
    7 4 1
    8 5 2
    9 6 3
    - - - - - - - - - - - - - -
    Method : 2 - ClockWise(RIGHT) 90 Degree Rotation
    Hence the 90 CW Rotation of array is:
    7 4 1
    8 5 2
    9 6 3
    - - - - - - - - - - - - - -
    Method : 1 - AntiClockWise(LEFT) 90 Degree Rotation
    Reverse Column is  not work same as reverse Row. It always need to do it manually by swapping columns and assigning indexing

        - - - - - - - - - - - - - -
    Method : 2 - AntiClockWise(LEFT) 90 Degree Rotation
    Hence, using SWapping Rows Method -  the 90 ACW Rotation of arraty is -
    3 6 9
    2 5 8
    1 4 7
    - - - - - - - - - - - - - -
     */
}
