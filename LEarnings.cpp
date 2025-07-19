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

void TransposedMatrix(int matrix[][10], int n, int m)
{
    // Transposed Matrices Fiirst -
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int j = i; j < m; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
    cout << "So, the Transpose Matrix we have is- " << endl;
    printMatrix(matrix, n, m);
}

void CWRotation(int matrix[][10], int n, int m)
{
    // Transposed Matrices Fiirst -
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int j = i; j < m; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
    cout << "So, the Transpose Matrix we have is- " << endl;
    printMatrix(matrix, n, m);

    // Now for CW 90. rotation - using Reverse
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i], matrix[i] + n);
    }
    cout << "Hence the 90 CW Rotation of arraty is - " << endl;
    printMatrix(matrix, n, m);
}

void CW2Rotation(TransposedMatrix(), int n, int m)
{

    // Now for CW 90. rotation - using Swap
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m/2; j++)
        {
            swap(matrix[i][j], matrix[i][n - j - 1]);
        }
    }
    cout << "Hence the 90 CW Rotation of arraty is - " << endl;
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
    TransposedMatrix(matrix, n, m);
    MatrixRotation(matrix, n, m);

    return 0;
}