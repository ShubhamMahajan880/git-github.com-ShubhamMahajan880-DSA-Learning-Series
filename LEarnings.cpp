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

void printMatrix(vector<vector<int>> &Matrix, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << Matrix[i][j] << " ";
        }
        cout << endl;
    }
    
}
int main()
{
    int n, m;
    cout << "Entering Row & colm - " << endl;
    cin >> n >> m;  
    vector<vector<int>> Matrix(n, vector<int>(m));

    cout << "Input Elements - " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> Matrix[i][j];
        }
    }
    

    cout << "ENtered 2D Vector is -" << endl;
    printMatrix(Matrix, n, m);
}
