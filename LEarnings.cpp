#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "";
    }
    cout << endl;
}

int subarraySum(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return (i, j);
            }
        }
    }
    return (-1, -1);
}

int main()
{
    int n = 7;
    int arr[7];

    cout << "Enter array elements - " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "So, entered array is - " << endl;

    int target;
    cout << "What's final target" << endl;
    cin >> target;

    subarraySum(arr, n, target);
}