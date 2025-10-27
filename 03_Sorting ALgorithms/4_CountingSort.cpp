#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    cout << "Array after sorting is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void countSort(int arr[], int n)
{
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    // Step 1: find min and max
    for (int i = 0; i < n; i++)
    {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    int range = maxVal - minVal + 1;
    vector<int> freq(range, 0);

    // Step 2: count frequencies
    for (int i = 0; i < n; i++)
        freq[arr[i] - minVal]++;

    // Step 3: reconstruct sorted array
    int index = 0;
    for (int i = 0; i < range; i++)
    {
        while (freq[i] > 0)
        {
            arr[index++] = i + minVal;
            freq[i]--;
        }
    }
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    countSort(arr, n);

    printArray(arr, n);

    /*
    Enter size of array: 8
    Enter array elements: 1 3 2 7 4 4 1 3
    Original array: 1 3 2 7 4 4 1 3
    Array after sorting is: 1 1 2 3 3 4 4 7

     */
}
