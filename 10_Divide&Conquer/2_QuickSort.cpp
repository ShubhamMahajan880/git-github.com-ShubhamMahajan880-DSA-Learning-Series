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

// 2) Quick Sort Algorithm -

// int partition(int arr[], int si, int ei)
// {
//     int i = si - 1;
//     int pivot = arr[ei];

//     for (int j = si; j < ei; j++)
//     {
//         if (arr[j] <= pivot)
//         {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     i++;
//     swap(arr[i], arr[ei]);
//     // pivotindex = i
//     return i;
// }

// void QuickSort(int arr[], int si, int ei)//O(n*logn)
// {
//     if (si >= ei)
//     {
//         return;
//     }

//     int pivotIdx = partition(arr, si, ei);

//     QuickSort(arr, si, pivotIdx - 1); // Left Half
//     QuickSort(arr, pivotIdx + 1, ei); // Right Half
// }

// void printArr(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int arr[6] = {6, 3, 7, 5, 2, 4};
//     int n = 6;

//     QuickSort(arr, 0, n - 1);
//     printArr(arr, n); // 2 3 4 5 6 7

// }
// ____________ ____________

// 2.1) Quick Sort Worst Case Scenario

/*📒 In the Worst Case of Quick Sort, the complxity will be O(n^2) and the
Worst case occurs when either in INCREASING Order Or in DECREASING Order
So, the Pivot element will be at last , so there will be an AP
*/
int partition(int arr[], int si, int ei)
{
    int i = si - 1;
    int pivot = arr[ei];

    for (int j = si; j < ei; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[ei]);
    // pivotindex = i
    return i;
}

void QuickSort(int arr[], int si, int ei) // O(n*logn)
{
    if (si >= ei)
    {
        return;
    }

    int pivotIdx = partition(arr, si, ei);

    QuickSort(arr, si, pivotIdx - 1); // Left Half
    QuickSort(arr, pivotIdx + 1, ei); // Right Half
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    QuickSort(arr, 0, n - 1);
    printArr(arr, n); // 1 2 3 4 5 6
}

// ____________ ____________ ____________ ____________ ____________
