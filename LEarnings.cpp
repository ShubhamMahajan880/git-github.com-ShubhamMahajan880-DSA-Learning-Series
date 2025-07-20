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
    cout << "- - -  - - - - -  - - - - -  - - " << endl;
}

void TransposedMatrix(int matrix[][10], int n, int m)
{
    if (n != m)
    {
        int TraspoMatrix[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                TraspoMatrix[j][i] = matrix[i][j];
            }
        }

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



void CWRotation(int matrix[][10], int n, int m)
{
    // Step 1: Transpose
    TransposedMatrix(matrix, n, m);

    // Now for CW 90. rotation - using Reverse
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i], matrix[i] + n);
    }
    cout << "Using Reverse Method -  the 90 CW Rotation of arraty is - " << endl;
    printMatrix(matrix, n, m);
}

void CW2Rotation(int matrix[][10], int n, int m)
{
    // Step 1: Transpose
    TransposedMatrix(matrix, n, m);

    // Step 2: Swap columns (rotate 90 CW)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m / 2; j++)
        {
            swap(matrix[i][j], matrix[i][m - j - 1]);
        }
    }

    cout << "Hence using Swap Columns methid  - 90 CW Rotation of array is:" << endl;
    printMatrix(matrix, n, m);
}

void ACWRotation(int matrix[][10], int n, int m)
{
    // Step -1 - Taking Tranpose First
    TransposedMatrix(matrix, n, m);

    // Step -2 - Using Reverse Column
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            reverse(matrix[j], matrix[j] + m);
        }
    }
    cout << "Using Reverse Method -  the 90 ACW Rotation of arraty is - " << endl;
    printMatrix(matrix, n, m);
}

void ACW2Rotation(int matrix[][10], int n, int m)
{
    // Step -1 - Taking Transpose First
    TransposedMatrix(matrix, n, m);

    // Step - 2 - Using Swapping Rowsa Method -
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i], matrix[i] + n);
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
    cout << "Entered Matrix is - " << endl;
    printMatrix(matrix, n, m);

    cout << "Transposed Matrix - " << endl;
    TransposedMatrix(matrix, n, m);

    cout << "180 Degree Rotation - " << endl;
    MatrixRotation(matrix, n, m);

    cout << "Method : 1 - ClockWise(RIGHT) 90 Degree Rotation " << endl;
    CWRotation(matrix, n, m);

    cout << "Method : 2 - ClockWise(RIGHT) 90 Degree Rotation " << endl;
    CW2Rotation(matrix, n, m);

    cout << "Method : 1 - AntiClockWise(LEFT) 90 Degree Rotation " << endl;
    ACWRotation(matrix, n, m);

        
    ACW2Rotation(matrix, n, m);

    return 0;
}