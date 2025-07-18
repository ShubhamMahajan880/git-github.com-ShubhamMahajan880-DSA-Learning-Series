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
    cout << "So, entered array so - " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void minElement(int arr[], int n)
{
    int MinElement = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < MinElement)
        {
            MinElement = arr[i];
        }
    }
    cout << "Hence the Min Elements is- " << MinElement << endl;
}

void maxElement(int arr[], int n)
{
    int MaxElement = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > MaxElement)
        {
            MaxElement = arr[i];
        }
    }
    cout << "&the mex element is - " << MaxElement << endl;
}

int firstIndex(int arr[], int n, int x)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << "So, the element foundd at - " << i << endl;
            return 0;
        }
    }
}

void lastIndex(int arr[], int n, int x)
{
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            index = i;
        }
    }
    cout << "So, the element from the last foundd at - " << index << endl;
}

void countFrequency(int arr[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count += 1;
        }
    }
    cout << "Frequency of eleemnt is - " << count << " times" << endl;
}

void ArrayOpeartions(int arr[], int n)
{
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    reverse(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Array Size is " << endl;
    cin >> n;

    int arr[n];
    cout << "Array Elements are - " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cout << "mention the element you want to search for - " << endl;
    cin >> x;

    printArray(arr, n);
    minElement(arr, n);
    maxElement(arr, n);
    firstIndex(arr, n, x);
    lastIndex(arr, n, x);
    countFrequency(arr, n, x);
    ArrayOpeartions(arr,n);
    return 0;
}