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

int majorityElement(int arr[], int n)
{

    sort(arr, arr + n);
    cout << "Array after sorting is - " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int expectedMajorityElement = arr[n / 2];
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == expectedMajorityElement)
        {
            count++;
        }
    }
    if (count > n / 2)
    {
        cout << "is the majority element - " << expectedMajorityElement << endl;
    }
    else
    {
        cout << "Not exist" << endl;
    }
    
    
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
    majorityElement(arr, n);
    return 0;
}