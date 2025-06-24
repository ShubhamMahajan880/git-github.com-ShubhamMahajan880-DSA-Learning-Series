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
// 1) Dynamic Memory Allocation -
//  int main()
//  {
//      /*
//      // int arr[100] = {1,2,3,4,5};
//      int size;
//      cin >> size;//10

//     int *arr = new int[size]; // so by using new keyword we can create an arrayu dynamically in memory
//     arr[0] = *(arr + 0);
//     arr[1] = *(arr + 1);
//     arr[2] = *(arr + 2);

//     int x = 1;
//     for (int i = 0; i < size; i++)
//     {
//         arr[i] = x;
//         cout << arr[i] << " ";
//         x++;
//     }
//     cout << endl;
//     /*
//     10
//     1 2 3 4 5 6 7 8 9 10
//      */
// }
// ____________ ____________

/*📒  In SMA - var,aray memo, fun me create hoti he staack me run hoti he within the fun end ho jaati he, no access in main fun or anywhere.
    but in DMA - Memory HEap me create hoti he and throughout the code can be accessible from anywhere
    2)  SO, here using new keyword. it's heap memory, but it'll also appearing every time still when no one sui g it. so as a
    program mandatory to delete the memory too.
    3) Hmne new keyword use kr ke pointer array or var bna liya lekin after using it in the main fun it must to delete again in the respectivve fun as the memory created in heap and will be existing throughout the code untill delete it - then bhale hi use na ho rhi ho
     */

// void funcInt()
// {
//     int *ptr = new int;
//     *ptr = 5;
//     cout<<*ptr;

//     delete ptr;
// }

// void funcArray()
// {
//     // int arr[100] = {1,2,3,4};
//     int size;
//     cin>>size;

//     int *arr = new int[size];// Created Dynamicallt Alllocated Memory
//     int x = 1;
//     for (int i = 0; i < size; i++)
//     {
//         arr[i] = x;
//         cout << arr[i] << " ";
//         x++;
//     }
//     cout<<endl;
//     delete[] arr;// Freeing up the sapce
// }
// int main()
// {
//     funcArray();
//     /*
//     10
//     1 2 3 4 5 6 7 8 9 10
//      */
//     funcInt();
//     // 5
// }
// ____________ ____________
// 2) DMA in 2D Dynamic Arrays -
int main()
{
    int n, m;
    cout << "No. of rows & columns are - " << endl;
    cin >> n >> m;

    int **matrix = new int *[n]; // Correct syntax for 2D dynamic array
    for (int i = 0; i < n; i++)
    {
        matrix[i] = new int[m];
    }

    // Data store
    int x = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] = x++;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Free the dynamically allocated memory
    for (int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
    /*
    No. of rows & columns are -
    3
    3
    1 2 3
    4 5 6
    7 8 9
     */
}
// ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________
