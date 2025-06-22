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

// Sorting Algorithms -
// 1) Bubble Sort ALgo -

void printArray(int arr[], int n)
{
    cout << "The sorted array after operation is - " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwap = false; // for the cases where array is already sorted, so for avoiding TC issues
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if (!isSwap)
        {
            // means array is already sorted, so return it from here
            return;
        }
    }
    printArray(arr, n);
}

int main()
{
    int n;
    cout << "value of array size" << endl;
    cin >> n;

    int arr[n];
    cout << "Write down the array elemenets - " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "So, the inserted array is - " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    bubbleSort(arr, n);

    return 0;
    /*
    value of array size
    8
    Write down the array elemenets -
    5 4 3 2 1 9 8 6
    So, the inserted array is -
    5 4 3 2 1 9 8 6
    The sorted array is -
    1 2 3 4 5 6 8 9

    T.C  - O(n^2)
     */
}
// ____________ ____________
// For descending Ordrt -

// void printArray(int arr[], int n)
// {
//     cout << "The sorted array after operation is - " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// void bubbleSort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         bool isSwap = false; // for the cases where array is already sorted, so for avoiding TC issues
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] < arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//                 isSwap = true;
//             }
//         }
//         if (!isSwap)
//         {
//             // means array is already sorted, so return it from here
//             return;
//         }
//     }
//     printArray(arr, n);
// }
// int main()
// {
//     int n;
//     cout << "value of array size" << endl;
//     cin >> n;

//     int arr[n];
//     cout << "Write down the array elemenets - " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "So, the inserted array is - " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     bubbleSort(arr, n);

//     return 0;
//     /*
//     value of array size
//     5
//     Write down the array elemenets -
//     9 5 3 1 4
//     So, the inserted array is -
//     9 5 3 1 4
//     The sorted array is -
//     9 5 4 3 1

//      */
// }
