#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int st, int mid, int end)
{
    vector<int> temp;
    int i = st;
    int j = mid + 1;

    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (int i = 0; i < temp.size(); i++)
    {
        arr[i + st] = temp[i];
    }
}

void mergeSort(vector<int> &arr, int st, int end)
{
    int n = arr.size();

    if (st < end)
    {
        int mid = (st + (end - st) / 2);
        mergeSort(arr, st, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, st, mid, end);
    }
}

void printVector(int n, vector<int> &arr)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n = 6;
    vector<int> arr(n);
    cout << "What are your vector elements - " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "So, our vector is - " << endl;
    printVector(n, arr);
    mergeSort(arr, 0, arr.size() - 1);
    cout << "So, after merging the array is - " << endl;

    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}