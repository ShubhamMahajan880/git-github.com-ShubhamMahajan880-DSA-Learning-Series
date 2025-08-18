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
// int main()
// {
/*
Arrays in cpp -  Linear Collection of Same Type of ELements that are stored together in
Contiguos Memory Spaces.
 */

//1)Initliazetion Methods of an array - 

// int marks[50];             // 0 to 49
// cout << marks[0] << endl;  // 4199136 - whn we don;t innitialize the array with any value it takes any garbage value in the memory
// cout << marks[1] << endl;  // 17566816
// cout << marks[2] << endl;  // 17566816
// cout << marks[50] << endl; // 4201056

// int percentage[5] = {0, 1, 2, 3, 4};
// cout << percentage << endl;
// cout << sizeof(percentage) << endl;                                          // 20 - int size = 4 bytes , so 5 int = 4*5 = 20 bytes
// cout << "lenght of array is - " << sizeof(percentage) / sizeof(int) << endl; // lenght of array is - 5

// 1.1)// Ouput & input of an array -
// int arr[5] = {0, 1, 2, 3, 4};
// for (int i = 0; i < 5; i++)
// {
//     cout << i << " "; // 0 1 2 3 4
// }
// cout << endl;

// int len = sizeof(arr) / sizeof(int);

// for (int idx = 0; idx <= len - 1; idx++)
// {
//     cout << arr[idx] << " "; // 0 1 2 3
// }
// cout << endl;
// ____________ ____________

//2) Largets Value/Max Element in the array -

// int n;
// cout << "n's value - " << endl;
// cin >> n;

// cout << "ENte array values - " << endl;
// int arr2[n];

// for (int i = 0; i < n; i++)
// {
//     cin >> arr2[i];
// }

// cout << "Entered array's value is - " << endl;
// for (int i = 0; i < n; i++)
// {
//     cout << arr2[i] << " ";
// }
// cout << endl;

// int maxEle = arr2[0];

// for (int i = 0; i < n; i++)
// {
//     if (arr2[i] > maxEle)
//     {
//         maxEle = arr2[i];
//         cout << "Current assigned max value is - " << arr2[i] << endl;
//     }
// }
// cout << "So, Finally max value is - " << maxEle << endl;
// ____________ ____________

//2.1) Min Element  -

//     int n;
//     cout << "n's value - " << endl;
//     cin >> n;

//     cout << "ENte array values - " << endl;
//     int arr2[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr2[i];
//     }

//     cout << "Entered array's value is - " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr2[i] << " ";
//     }
//     cout << endl;

//     // For Min Element
//     int minEle = arr2[0];

//     for (int i = 0; i < n; i++)
//     {
//         if (arr2[i] < minEle)
//         {
//             minEle = arr2[i];
//             cout << "Current assigned min value is - " << arr2[i] << endl;
//         }
//     }
//     cout << "So, Finally min value is - " << minEle << endl;
// /*
// n's value -
// 6
// ENte array values -
// 89 45 23 12 56 78
// Entered array's value is -
// 89 45 23 12 56 78
// Current assigned min value is - 45
// Current assigned min value is - 23
// Current assigned min value is - 12
// So, Finally min value is - 12
//  */
// }
// ____________ ____________ ____________ ____________ ____________

//3)  Dereferences of Pointer concept in Array -

// Array's are by default passed by reference. The value change in function affects in main fun also

// void func(int arr[])
// {
//     arr[0] = 1000;
//     cout << arr[0] << endl;
// }

// void func2(int *ptr)
// {
//     ptr[0] = 1000;
//     cout << ptr[0] << endl;
// }

// void PrintArr(int arr2[])
// {

//     int n = sizeof(arr2)/sizeof(int);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr2[i] << " ";
//     }
//     cout << endl;
// }

// void PrintArr2(int arr2[], int n)
// {

//     // int n = sizeof(arr2)/sizeof(int);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr2[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int a = 5;
//     int *ptr = &a;
//     cout << ptr << endl;  // 0x61ff08
//     cout << *ptr << endl; // 5 - Derefenrece operation - using pointer getting variables value

//     int arr[] = {2, 4, 6, 8, 10};
//     cout << *arr << endl;       // 2 - can also got by usng cout<<arr[0]. Here using Aestric as its dererfenrece of array
//     cout << *(arr + 1) << endl; // 4
//     cout << *(arr + 2) << endl; // 6

//     func(arr);              // 1000 - jb fun decln me array pass kiya jaata he to yh by default  CALL BY REFERENCE use krta h
//     cout << arr[0] << endl; // 1000 - Passing array name is eq. to passing the pointer

//     func2(ptr);             // 1000
//     // so clearly, pointer and array are quivalent. in case of array

//     int arr2[] = {5, 10, 15, 20};
//     PrintArr(arr2);// w/o paasing the array size too in paramter we canb't print thte array. Because it consider as thee pointer size not the array size
// /*
// 1_IntroToArray.cpp: In function 'void PrintArr(int*)':
// 1_IntroToArray.cpp:150:24: warning: 'sizeof' on array function parameter 'arr2' will return size of 'int*' [-Wsizeof-array-argument]
//      int n = sizeof(arr2)/sizeof(int);
//                         ^
// 1_IntroToArray.cpp:147:24: note: declared here
//  void PrintArr(int arr2[])
// */
//     PrintArr2(arr2,4);//5 10 15 20 - so make sure array apne aap me ek pointer h which by defualt use sthe Call by reference propeerty. and funciton me array pass krte tym, hmesha size bhi as a paramter pass kre

// }
// ____________ ____________ ____________ ____________ ____________

//4) Linear Search in array -

// my method -

// int linearSeach()
// {
//     int n;
//     int key;
//     cout << "No of elements in Array - " << endl;
//     cin >> n;

//     int arr[n];
//     cout << "What are the array's eleemnts" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "So, the enetred aray is -" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     cout << "Now mention the element you want to search for - " << endl;
//     cin >> key;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == key)
//         {
//             cout << "So, key is - " << key << "  and found at " << i << endl;
//         }
//     }
// }
// int main()
// {
//     linearSeach();
// }
// ____________ ____________

// using proper method -

// int linearSearch(int arr[], int key)
// {
//     for (int i = 0; i < 8; i++)
//     {
//         if (arr[i] == key)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int arr[8] = {8, 16, 24, 32, 40, 48, 56, 64};
//     cout<<linearSearch(arr,15)<<endl;//-1
//     cout<<linearSearch(arr, 40)<<endl;//4
//     return 0;

// // T.C -is simply depends on no. of itersations which is depend on no. of elements - O(n)
// }
// ____________ ____________ ____________ ____________ ____________

//5) Reverse an array
// 5.1) using extra space

// int main()
// {
//     int n;
//     cout << "value of array size" << endl;
//     cin >> n;

//     int arr[n];
//     cout << "Write down the array elemenets - " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "So, the inserted array is - " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     int copyArr[n]; // an empty new array for getting all previous arra's value
//     for (int i = 0; i < n; i++)
//     {
//         int j = n - i - 1;
//         copyArr[i] = arr[j];
//     }

//     // now elements are stored in copyarr in reverse ordedr, so storing in the origina  again

//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = copyArr[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// /*
// value of array size
// 5
// Write down the array elemenets -
// 56 89 12 23 78
// So, the inserted array is -
// 56 89 12 23 78
// 78 23 12 89 56
//  */
// }

//  Same approach using functions -

// void reverseArray(int arr[], int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int n;
//     cout << "value of array size" << endl;
//     cin >> n;

//     int arr[n];
//     cout << "Write down the array elemenets - " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "So, the inserted array is - " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     int copyArr[n]; // an empty new array for getting all previous arra's value
//     for (int i = 0; i < n; i++)
//     {
//         int j = n - i - 1;
//         copyArr[i] = arr[j];
//     }

//     // now elements are stored in copyarr in reverse ordedr, so storing in the origina  again

//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = copyArr[i];
//     }

//     reverseArray(arr, n);
// /*
// 📌 - T. C - is same - O(n) - depends on iterations whichd epend on no. of elements
// S.C - O(n) for Original array, but due to creation another array which is extra space also O(n) - so S.C - O(n*n) = O(n^2)
//  */
// }
// ____________ ____________

// 5.2 - W/o using Extra Space1 - 2 POINTERS APPROACH

// void printArray(int arr[], int n)
// {
//     cout << "Hence, the reversed array is - " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     int n;
//     cout << "value of array size" << endl;
//     cin >> n;

//     int arr[n];
//     cout << "Write down the array elemenets - " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "So, the inserted array is - " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // usingn 2 pointer approch -
//     int start = 0, end = n - 1;
//     while (start < end)
//     {

//         swap(arr[start], arr[end]);

//         /* or by usign swap method
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         */

//         start++;
//         end--;
//     }

//     printArray(arr, n);
//     return 0;
//     /*
//     value of array size
//     5
//     Write down the array elemenets -
//     89 56 45 23 12
//     So, the inserted array is -
//     89 56 45 23 12
//     Hence, the reversed array is -
//     12 23 45 56 89
//     */
// }

// ____________ ____________

//6) Binary Search - It alywas for the Sorted Array

// int main()
// {
//     int n;
//     cout << "value of array size" << endl;
//     cin >> n;

//     int arr[n];
//     cout << "Write down the array elemenets - " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "So, the inserted array is - " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     int key;
//     cout << "Now, enter the key you want to search for - " << endl;
//     cin >> key;
//     // For Binary Search Approach -
//     int start = 0, end = n - 1;

//     while (start <= end)
//     {
//         int mid = (start + end) / 2;

//         if (arr[mid] == key)
//         {
//             cout<<"Element is here and got at - "<<mid<<endl;
//             return 0;
//         }
//         else if (arr[mid] < key)
//         {
//             start = mid + 1;
//         }
//         else if (arr[mid] > key)
//         {
//             end = mid - 1;
//         }
//         cout << "Element not found" << endl;
//     }
//     return 0;
// T.c -O(log n)
// }

// ____________ ____________

//7) ArrayPointer - Array is always treat as constant pointer, array pointer can;t be modifed as in another variable poinyer

// int main()
// {
// int x = 10;
// int *ptr = &x;

// int y=25;
// ptr = &y;
// cout<<*ptr<<"\n";//25 - in variable it is possible to update the pointer with another value and variable
// return 0;

// // int arr[5];
// // cout<<arr<<endl;
// // int y = 25;
// // arr = &y; // showing error as  - Expresion must be a modifiabble value
// ____________ ____________

//1. Pointer Arithmatic Approaches -

// //1. using increment decrement operator. In array using pointer on incrementing and decrementing it does the operations by the datatype size.

//     int a = 10;
//     int *ptr = &a;
//     cout<<ptr<<endl;//0x61ff08
//     ptr++;
//     cout<<ptr<<endl;//0x61ff0c
//     ptr--;
//     cout<<ptr<<endl;// 0x61ff08
// /*
// 0x61ff08 - address of var pointer a
// 0x61ff0c - on incrementing by ++ it'll increase by 4 bytes as int size is 4 bytes, so the new address is indcreased.
// In hexadecimal initially it was 08, but now it's 0c - which is 12
// 0x61ff08 - on doing the decrement operation, address again decreased by 4 bytes.
// */
// ____________ ____________ 

// // 2. Addition & Substraction of Constants -
//     int a1 = 5;
//     int *ptr1 = &a1;
//     cout<<ptr1<<endl;//0x61ff00 - here address is 0
//     cout<<(ptr1+3)<<endl;//0x61ff0c - here increased by3*4bytes = 12 bytes which is c.
// // Pointer me addition ya sustr. krne pr int ke size ke terms me hota he. Yaha add 3 * 4 byte as size of int = 12 bytes
//     cout<<(ptr1-3)<<endl;
// }

// interms of array by Arithmatic operation using Dereferenc eoperator -

// void printArr(int *ptr, int n)
// {
//     for (int i = 0; i < 7; i++)
//     {
//         cout << *(ptr + i) << endl;
//     }
// }

// int main()
// {
//     int arr[] = {2, 4, 5, 6, 10, 12, 17};
//     int n = sizeof(arr) / sizeof(int);
//     printArr(arr, n);
// }

// /*
// 2
// 4
// 5
// 6
// 10
// 12
// 17
//  so here pritning all arrray values usig dereference operator */
// ____________ ____________ 

// 3. Addition & Substraction of Pointers 
int main()
{
    int a = 5;
int *ptr1 = &a;
int *ptr2 = ptr1 + 3;

cout<<ptr1<<endl;//0x61ff04
cout<<ptr2<<endl;//0x61ff10
cout<<ptr2 - ptr1 <<endl;//3

// interms of array - 
int arr[20] = {1,2,3,4,5,6};
int *ptr3 = arr; // base address of array
int *ptr4 = ptr3+3;// base add + 3bytes 

cout<<*ptr3<<endl;//1
cout<<*ptr4<<endl;//4

// 4. Comparision Operators 
cout<<(ptr2>ptr1)<<endl;//1 - Yes : True
cout<<(ptr4<ptr3)<<endl;// 0 - NO : False
cout<<(ptr3 == arr)<<endl;//1 - YES ptr3 and arr are same pointing

}
// ____________ ____________ ____________ ____________ ____________

