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

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int quickPartitin(int arr[], int si, int ei)
{
    int i = si - 1;
    int pivotElement = arr[ei];

    for (int j = si; j < ei; j++)
    {
        if (arr[j] <= arr[ei])
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[ei]);

    pivotElement = i;
    cout << "next pivotindexing will be " << i << endl;
    return i;
}

void QuickSort(int arr[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }

    int pivotIndex = quickPartitin(arr, si, ei);
    QuickSort(arr, si, pivotIndex - 1);
    QuickSort(arr, pivotIndex + 1, ei);
}

int main()
{
    int n;
    cout << "Array size - " << endl;
    cin >> n;

    int arr[n];
    cout << "Ecter array elements - " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "So, entered array is  - " << endl;
    printArray(arr, n);

    QuickSort(arr, 0, n - 1);

    cout << "The Sorted Array After Quick Sort We Have is - " << endl;
    printArray(arr, n);
    return 0;
}
