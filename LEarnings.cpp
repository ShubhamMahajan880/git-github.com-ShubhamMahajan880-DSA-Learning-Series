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

void ArrayOperation(int arr[], int n)
{
    int sum = 0, mul = 1, avg = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        mul *= arr[i];
    }
    avg = (sum / n);
    cout << "Array Addition is - " << sum << endl;
    cout << "Array Multiplication si - " << mul << endl;
    cout << "Similarly, array avg is - " << avg << endl;
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
    printArray(arr, n);
    ArrayOperation(arr, n);
    return 0;
}