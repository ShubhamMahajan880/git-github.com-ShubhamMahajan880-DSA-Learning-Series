#include <bits/stdc++.h>
using namespace std;

void reverseArray(int n, int arr[])
{
    int st = 0;
    int end = n - 1;

    while (st < end)
    {
        swap(arr[st], arr[end]);
        st++;
        end--;
    }
}

int printArray(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "What is array size - " << endl;
    cin >> n;
    int arr[n];
    cout << "Input your elements - " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "So, the array is - " << endl;
    printArray(n, arr);
    reverseArray(n, arr);
    printArray(n, arr);
}
