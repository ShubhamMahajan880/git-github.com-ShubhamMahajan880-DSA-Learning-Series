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
using namespace std;
// 4) Counting Sort Algortihm - 
void printArray(int arr[], int n)
{
    cout << "Array after sorting is - " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

void countingSort(int arr[], int n)
{

}
int main()
{
    int n;
    cout<<"value of array size"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Write down the array elemenets - "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }        
    cout<<"So, the inserted array is - "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}