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
    cout << "size of array - " << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Give elements of array  - " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Maximum subarray sum -
    int ans = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            ans = max(ans, sum);
        }
    }
    cout << ans << endl;
}
