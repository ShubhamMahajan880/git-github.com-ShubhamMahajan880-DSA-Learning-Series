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

int staircaseSearch(int matrix[10][10], int n, int m, int target)
{
    int i = n - 1;
    int j = 0;
    while (i >= 0 && j < m)
    {
        if (matrix[i][j] == target)
        {
            cout << "target is successfully found at - (" << i << "," << j << ")" << endl;
            return 0;
        }
        else if (matrix[i][j] > target)
        {
            i--;
        }
        else
        {
            j++;
        }
    }
    cout << "target isn't available in the SOrted matrices " << endl;
    return -1;
}

void printMatrix(int matrix[10][10], int n, int m)
{
    cout << "So, inserted matrix we have is - " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n, m;
    cout << "Row & Colm values- " << endl;
    cin >> n >> m;

    int matrix[10][10];
    cout << "Enter the matrix elements - " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    printMatrix(matrix, n, m);

    int target;
    cout << "what is your target in matrix - " << endl;
    cin >> target;
    staircaseSearch(matrix, n, m, target);
    return 0;
}
