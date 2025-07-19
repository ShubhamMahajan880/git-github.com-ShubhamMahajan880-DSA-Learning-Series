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

void BoundaryElementSUm(int matrix[][10], int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
            {
                sum += matrix[i][j];
            }
        }
    }
    cout << "hence the sum of Boundary Elemets is - " << sum << endl;
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
    BoundaryElementSUm(matrix, n, m);

    return 0;
}