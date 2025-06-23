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

int targetElementinMatrix(int mat[100][100], int n, int m, int target)
{
    // Printing the sum of entered matrix -
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == target)
            {
                cout << "Yes it's present and the address is: row no-  " << i << " & column no-  " << j << " having targeted value-  " << mat[i][j];
                return 0;
            }
        }
    }
    cout << "Sorry, Element Not FOund Bruh.." << endl;
}
int main()
{
    int n, m;
    cout << "no. of rows & colms are - " << endl;
    cin >> n >> m;

    int mat[100][100];
    // Taking input & printing the values
    cout << "Now, enter the array elements - " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    cout << "So, the entered 2D Array si - " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    int target;
    cout << "So, what's the targeted element - " << endl;
    cin >> target;
    targetElementinMatrix(mat,n,m,target);
/* 
no. of rows & colms are - 
3 3 
Now, enter the array elements - 
1 2 3 4 5 6 7 8 9
So, the entered 2D Array si - 
1 2 3 
4 5 6 
7 8 9 
So, what's the targeted element - 
6
Yes it's present and the address is: row no-  1 & column no-  2 having targeted value-  6

 */    
}
