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
    cout << "Entered Array we have is- " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(int arr[], int n)
{
    // Using 2 Pointer Approaaches  -
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);

        start++;
        end--;
    }

    cout << "Printing the Reversed Array - " << endl;
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

    printArray(arr, n);
    reverseArray(arr, n);
    return 0;
}