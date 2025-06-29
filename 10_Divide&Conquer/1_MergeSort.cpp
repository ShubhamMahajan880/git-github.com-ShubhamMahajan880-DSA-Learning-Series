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

//1) Merge Sort Algo -

void Merge(int arr[], int si, int mid, int ei) // O(n)
{
    vector<int> temp;
    int i = si;
    int j = mid + 1;

    while (i <= mid && j <= ei)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= ei)
    {
        temp.push_back(arr[j]);
        j++;
    }

    // Coverting vector to an aOriginal Array
    for (int i = si, x = 0; i <= ei; i++)
    {
        arr[i] = temp[x++];
    }
}

void mergeSort(int arr[], int si, int ei) // O(log n), so total complexity - O(nlogn)
{
    if (si >= ei)
    {
        return;
    }
    int mid = si + (ei - si) / 2;

    mergeSort(arr, si, mid);     // LeftHalf
    mergeSort(arr, mid + 1, ei); // RightHalf
    Merge(arr, si, mid, ei);     // Conquer
}

void printArray(int arr[], int n)
{
    cout << "Sorted Array is - " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[6] = {6, 3, 7, 5, 2, 4};
    int n = 6;

    mergeSort(arr, 0, n - 1);
    printArray(arr,n);
/* 
Sorted Array is - 
2 3 4 5 6 7 
 */    
}
// ____________ ____________ ____________ ____________ ____________
