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
    cout << "Entered Matrix is - " << endl;
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // Transposed matroces -
            for (int j = i; j < m; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
    cout << "So, the Transpoised Matrix we have is - " << endl;
    printMatrix(matrix, n, m);
}

void MatrixRotation(int matrix[][10], int n, int m)
{
    
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
    printMatrix(matrix, n, m);
    TransposedMatrix(matrix, n, m);
    MatrixRotation(matrix, n, m);

    return 0;
}