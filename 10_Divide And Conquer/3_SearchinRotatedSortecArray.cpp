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

//3) Searching In Rotated Array Problem 

int search(int arr[], int si, int ei, int target)
{
    if (si > ei)
    {
        return -1;
    }

    int mid = si + (ei - si) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }

    if (arr[si] <= arr[mid]) // it's for L1
    {
        if (arr[si] <= target && target <= arr[mid])
        {
            // For left Half
            return search(arr, mid + 1, ei, target);
        }
        else
        {
            // For Right half
            return search(arr, mid + 1, ei, target);
        }
    }
    else
    {
        // Now it's for L2
        if (arr[mid] <= target && target <= arr[ei])
        {
            // For Right Half
            return search(arr, mid + 1, ei, target);
        }
        else
        {
            // For left half
            return search(arr, si, mid - 1, target);
        }
    }
}

int main()
{
    int arr[7] = {4, 5, 6, 7, 0, 1, 2};
    int n = 7;

    cout << "idx : " << search(arr, 0, n - 1, 0) << endl; // idx : -1
    cout << "idx : " << search(arr, 0, n - 1, 2) << endl; // idx : 6
    cout << "idx : " << search(arr, 0, n - 1, 7) << endl; // idx : 3
// T.C - O(logn)
}
// ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________
