#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    cout << "Array after sorting is - " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void countingSort(int arr[], int n)
{
    // Find the maximum element in the array
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    // Create a count array to store the frequency of each element
    int count[max + 1] = {0};

    // Store the count of each element
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    // Change count[i] so that count[i] now contains the actual
    // position of this element in the output array
    for (int i = 1; i <= max; i++)
    {
        count[i] += count[i - 1];
    }

    // Create an output array to store the sorted elements
    int output[n];

    // Build the output array by placing elements in their correct position
    for (int i = n - 1; i >= 0; i--)
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Copy the sorted elements back into the original array
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

int main()
{
    int n;
    cout << "Value of array size: " << endl;
    cin >> n;

    int arr[n];
    cout << "Write down the array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "So, the inserted array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    countingSort(arr, n);
    printArray(arr, n);

    return 0;
}
