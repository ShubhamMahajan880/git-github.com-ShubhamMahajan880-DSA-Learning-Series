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

void KadansAlgo(int arr[], int n)
{
    int ans = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)

    {

        sum += arr[i];
        ans = max(ans, sum);

        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << "So, the element sum can be printed as " << ans << endl;
}

int main()
{
    int n;
    cout << "Array SIze - " << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Elements are - " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> i;
    }
    cout << "Entered Array is - " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}