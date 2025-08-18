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
//2) Selection Sort Implementation -

// void printArray(int arr[], int n)
// {
//     cout << "Array after sorting is -  " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// void selectionSort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int minIndex = i;
//         for (int j = i; j < n; j++)
//         {
//             if (arr[j] < arr[minIndex])
//             {
//                 minIndex = j;
//             }
//         }
//         swap(arr[i], arr[minIndex]);
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
//     selectionSort(arr, n);
//     return 0;
/* 
value of array size
5
Write down the array elemenets - 
5 4 1 3 2
So, the inserted array is - 
5 4 1 3 2 
Array after sorting is -  
1 2 3 4 5 
 */    
// }
// ____________ ____________ 
//2.1) Selection Sort Implementation for decreasing Order - 

void printArray(int arr[], int n)
{
    cout << "Array after sorting is -  " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] > arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
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
    selectionSort(arr, n);
    return 0;
/* 
value of array size
5
Write down the array elemenets - 
1 6 2 4 3 5
So, the inserted array is - 
1 6 2 4 3 
Array after sorting is -  
6 4 3 2 1 
T.C - O(n*logn) is better than O(n^2).
*/    
}
// ____________ ____________ ____________ ____________ ____________
