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

void printArray(vector<int> &arr)
{
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

void SelectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int minElement = INT_MAX;
        int minIdx = -1;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < minElement)
            {
                minElement = arr[j];
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
    cout << "After SOrting array we have is - " << endl;
    printArray(arr);
}
int main()
{
    int n;
    cout << "Array SIze - " << endl;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> i;
    }
    cout << "Entered Array is - " << endl;
    printArray(arr);
    SelectionSort(arr,n);
}