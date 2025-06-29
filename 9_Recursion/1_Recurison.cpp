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
// 1)Recursion -  When a funciton repeatidly call itslf is called Recursion

// int factorial(int n)
// {
//     if (n == 0 || n == 1)//Base Case
//     {
//         return 1;
//     }
//     return n * factorial(n - 1);//Working condition with smallest condition
// }
// int main()
// {
//     // Recursive fun for facvtorial -
//     int n;
//     cout << "What is the n's value - " << endl;
//     cin >> n;

//     cout << factorial(n) << endl;//120
//     cout << factorial(6) << endl;//720
//     cout << factorial(7) << endl;//5040
//     cout << factorial(8) << endl;//40320

// }
// ____________ ____________

// 2) Recursion QUns -
// 2.1) Print the numbe1rs in descending  Order

// void PrintNumber(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     cout << n <<" ";
//     PrintNumber(n - 1);
// }

// int main()
// {
//     PrintNumber(10);
// /*
// 10 9 8 7 6 5 4 3 2 1
//  */
// }
// ____________ ____________

// 2.2) Stack Overflow -

// void func()
// {
//     cout << "Function called ....working" << endl;
//     func();
// }
// // Gives Segmentation falut at a time when memory is fullyu filled
// int main()
// {
//     return 0;
// }
// /*
// The function func() is recursively calling itself without a base condition, which leads to infinite recursion, ultimately overflowing the call stack, resulting in a segmentation fault.
//  */
// ____________ ____________

// 2.3)Sum of N-Natural Nmbers -

// int Sum(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     return n + Sum(n - 1);
// }
// int main()
// {
//     cout<<Sum(5)<<endl;//15
//     cout<<Sum(6)<<endl;//21
//     cout<<Sum(10)<<endl;//55
// }
// ____________ ____________

// 2.4) Print Nth Fibonacci Number -

// int fibonaccci(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return n;
//     }
//     return fibonaccci(n - 1) + fibonaccci(n - 2);
// }
// int main()
// {
//     cout << fibonaccci(0) << endl;  // 0
//     cout << fibonaccci(1) << endl;  // 1
//     cout << fibonaccci(2) << endl;  // 1
//     cout << fibonaccci(3) << endl;  // 2
//     cout << fibonaccci(4) << endl;  // 3
//     cout << fibonaccci(5) << endl;  // 5
//     cout << fibonaccci(6) << endl;  // 8
//     cout << fibonaccci(7) << endl;  // 13
//     cout << fibonaccci(8) << endl;  // 21
//     cout << fibonaccci(9) << endl;  // 34
//     cout << fibonaccci(10) << endl; // 55
// }
// ____________ ____________

// 2.5) Check if Array is Sorted or Not -

// bool isSortedArray(int arr[], int n, int i)
// {
//     if (i == n - 1)
//     {
//         return true;
//     }
//     if (arr[i] > arr[i + 1])
//     {
//         return false;
//     }
//     return isSortedArray(arr, n, i + 1);
// }

// int main()
// {
//     int arr1[5] = {1, 2, 3, 4, 5}; // Sorted: 1
//     int arr2[5] = {1, 2, 4, 3, 5}; // Unsorted : 0

//     cout<<isSortedArray(arr1,5,0)<<endl;//1
//     cout<<isSortedArray(arr2,5,0)<<endl;//0
// }
// ____________ ____________

// 2.6) First OCcurence -

// int firstOccurance(vector<int> arr, int i, int target)// phle apne liye check kr rhe h pphr abad waale index ke liye
// {
//     if (i == arr.size())
//     {
//         return -1;
//     }

//     if (arr[i] == target)
//     {
//         return i;
//     }
//     return firstOccurance(arr, i + 1, target);
// }
// int main()
// {
//     vector<int> arr = {1, 2, 3, 3, 3, 4,5,8,8,2,9,10};
//     cout << firstOccurance(arr, 0, 3) << endl;//2
//     cout << firstOccurance(arr, 2, 3) << endl;//2
//     cout << firstOccurance(arr, 0, 8) << endl;//7
// }
// ____________ ____________

// 2.6.1) Last OCcurence -

// int lastOccurance(vector<int> arr, int target, int i)
// {
//     if (i == arr.size())
//     {
//         return -1;
//     }

//     int idxFound = lastOccurance(arr, target, i + 1);//last occ. me phle baad wale k liye check kr rhe h phr apne liye
//     if (idxFound == -1)
//     {
//         if (arr[i] == target)
//         {
//             return i;
//         }
//     }
//     return idxFound;
// }
// int main()
// {
//     vector<int> arr = {1, 2, 3, 3, 3, 4, 5, 8, 8, 2, 9, 10};
//     cout << lastOccurance(arr, 3, 0) << endl; // 4 from last occ.
//     cout << lastOccurance(arr, 2, 0) << endl; // 9
//     cout << lastOccurance(arr, 8, 7) << endl; // 8
//     cout << lastOccurance(arr, 45, 0) << endl;//-1
// }
// ____________ ____________

// 2.7) X to the power N  -

// int pow(int x, int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }

//     int halfPow = pow(x, n / 2);
//     int halfPowSquare = halfPow * halfPow;

//     if (n % 2 != 0)
//     {
//         return x * halfPowSquare;
//     }
//     return halfPowSquare;
// }
// int main()
// {
//     cout << pow(2, 5) << endl;//32
//     cout << pow(2, 10) << endl;//1024
//     cout << pow(3, 4) << endl;//81
//     cout << pow(5, 5) << endl;//3125
// // T.C - Well optimized approach with TC O(log n)
// }
// ____________ ____________
