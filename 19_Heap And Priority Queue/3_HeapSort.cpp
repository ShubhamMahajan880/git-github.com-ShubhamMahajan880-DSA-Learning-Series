#include <bits/stdc++.h>
// #include <iostream>
// #include<algorithm>
// #include<climits>
// #include<cctype>
// #include<iomanip>
// #include<cmath>
// #include<vector>
// #include<set>
// #include<string>
// #include <map>;
// #include<list>
// #include<iterator>
// #include<stack>
// #include <queue>
// #include <deque>
using namespace std;

//4) Heap Sort & its implemetations - 
/*
- Heap Sort is also a Sorting Algo - with the complexoity - O(nlogn)
- basically for any sorting we'll not be reffering to use Heap Sort, Although the complexity is same but the Sorting Alggo - Merge & Sort will be preferred
- Very Importatn from Intervieew pointof view
 - For sorting in increasing order - Ascending - Min Heap
                  Decreasing Order - Descending - Max Heap
- Heapify function is basically create when need to fix the heap. For leaf Nodes as its already fixed so need to change for leaf
-heapify is only called for all Non-last Elements
*/

// void heapify(int i, vector<int> &arr, int n)
// {
//     int left = 2 * i + 1;
//     int right = 2 * i + 2;
//     int maxIdx = i;

//     if (left < n && arr[left] > arr[maxIdx])
//     {
//         maxIdx = left;
//     }

//     if (right < n && arr[right] > arr[maxIdx]) // fixed comparison bug
//     {
//         maxIdx = right;
//     }
//     if (maxIdx != i)
//     {
//         swap(arr[i], arr[maxIdx]);
//         heapify(maxIdx, arr, n);
//     }
// }

// void heapSort(vector<int> &arr)
// {
//     int n = arr.size();
//     // Step - 1 : Build Maxheap
//     for (int i = n / 2 - 1; i >= 0; i--) // fixed starting index
//     {
//         heapify(i, arr, n);
//     }

//     // Step -2 : Taking elements to correct possition -
//     for (int i = n - 1; i >= 0; i--)
//     {
//         swap(arr[0], arr[i]);
//         heapify(0, arr, i);
//     }
// }

// int main()
// {
//     vector<int> arr = {1, 4, 2, 5, 3};
//     heapSort(arr);

//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     /*
//     1 2 3 4 5

//      */
// }

// -------------------

// For descending Order usign Heap Sort  -

// void heapify(int i, vector<int> &arr, int n)
// {
//     int left = 2 * i + 1;
//     int right = 2 * i + 2;
//     int maxIdx = i;

//     if (left < n && arr[left] < arr[maxIdx])
//     {
//         maxIdx = left;
//     }

//     if (right < n && arr[right] < arr[maxIdx]) // fixed comparison bug
//     {
//         maxIdx = right;
//     }
//     if (maxIdx != i)
//     {
//         swap(arr[i], arr[maxIdx]);
//         heapify(maxIdx, arr, n);
//     }
// }

// void heapSort(vector<int> &arr)
// {
//     int n = arr.size();
//     // Step - 1 : Build Maxheap
//     for (int i = n / 2 - 1; i >= 0; i--) // fixed starting index - O(n*logn) - for the loop complexity is N/2 times means n times and n times running for heapify which is logn time so overall complexity will be O(n*logn) times.
//     {
//         heapify(i, arr, n);
//     }

//     // Step -2 : Taking elements to correct possition -
//     for (int i = n - 1; i >= 0; i--) // O(n*logn)
//     {
//         swap(arr[0], arr[i]);
//         heapify(0, arr, i);
//     }
// }

// int main()
// {
//     vector<int> arr = {1, 4, 2, 5, 3};
//     heapSort(arr);

//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     /*
//     5 4 3 2 1
//      */
// }
// ____________ ____________ ____________ ____________ ____________

