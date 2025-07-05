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

    int n;
    cout << "vakue of n - " << endl;
    cin >> n;

    //     // 1st Butterfly
    //     // Printing Star
    //     for (int i = 1; i <= n; i++)
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << "* ";
    //         }

    //         // Printing SPace
    //         for (int j = 1; j <= 2 * (n - i); j++)
    //         {
    //             cout << "  ";
    //         }

    //         // Prinmting Start for last
    //         for (int k = 1; k <= i; k++)
    //         {
    //             cout << "* ";
    //         }
    //         cout << endl;
    //     }
    //     // 2nd Half Butterfly
    //     for (int i = n; i >= 1; i--)
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << "* ";
    //         }

    //         // Printing SPace
    //         for (int j = 1; j <= 2 * (n - i); j++)
    //         {
    //             cout << "  ";
    //         }

    //         // Prinmting Start for last
    //         for (int k = 1; k <= i; k++)
    //         {
    //             cout << "* ";
    //         }
    //         cout << endl;
    //     }
    int arr[n];
    cout << "mention the array elements her - " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "So, the inserted array elements are - " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
    