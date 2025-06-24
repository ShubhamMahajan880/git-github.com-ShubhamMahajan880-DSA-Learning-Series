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
using namespace std;

int main()
{
    vector<vector<int>> Matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < Matrix.size(); i++)
    {
        for (int j = 0; j < Matrix[i].size(); j++)
        {
            cout << Matrix[i][j] << " ";
        }
        cout << endl;
    }
}
