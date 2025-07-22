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

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int element = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < element)
        {
            swap(arr[j], arr[j + 1]);
            j--;
        }
        arr[j + 1] = element;
    }
    cout << "Sorted array we have is - " << endl;
    printArray(arr, n);
}

int main()
{
    int n;
    cout << "Array Size - " << endl;
    cin >> n;

    int arr[n];
    cout << "Array elememts are - " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Entered Array we have is- " << endl;
    printArray(arr, n);
    insertionSort(arr, n);
    return 0;
}