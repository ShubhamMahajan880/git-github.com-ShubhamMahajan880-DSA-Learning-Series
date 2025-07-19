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

    cout << "Hence the 90 CW Rotation of array is:" << endl;
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
    TransposedMatrix(matrix, n, m);
    // CW2Rotation(matrix, n, m);

    return 0;
}
