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

//8) Subarrays -

// void printSubArray(int Prices[], int n)
// {
//     cout << "So, pairwise subarrays are - " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             cout << "(" << Prices[i] << "," << Prices[j] << ")";
//         }
//         cout << endl;
//     }
// }

// void SubArray2(int Prices[], int n)
// {
//     cout << "and the subarrays are - " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             cout << Prices[j] << " ";
//         }
//         cout << endl;
//     }
// }
// // OR
// int main()
// {
//     int n;
//     cout << "value of array size" << endl;
//     cin >> n;

//     int Prices[n];
//     cout << "Write down the array elemenets - " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> Prices[i];
//     }
//     cout << "So, the inserted array is - " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << Prices[i] << " ";
//     }
//     cout << endl;

//     printSubArray(Prices, n);
//     SubArray2(Prices, n);
//     /*
//     value of array size
// 5
// Write down the array elemenets -
// 12 23 56 45 89
// So, the inserted array is -
// 12 23 56 45 89
// So, pairwise subarrays are -
// (12,12)(12,23)(12,56)(12,45)(12,89)
// (23,23)(23,56)(23,45)(23,89)
// (56,56)(56,45)(56,89)
// (45,45)(45,89)
// (89,89)
// and the subarrays are -
// 12 23 56 45 89
// 23 56 45 89
// 56 45 89
// 45 89
// 89
// T.C -  O(n^3)
// */
// }

// ____________ ____________

// 9) Max Subarray Sum -
// 9.1 - Clearly Brute Force Approach -

// void maxSubArraySum(int Prices[], int n)
// {
//     int maxSum = INT_MIN;
//     cout << "Noe for maximum subarray sum - " << endl;
//     // in form of subarray the sum
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = i; j < n; j++)
//         {
//             int currSum = 0;
//             for (int k = i; k <= j; k++)
//             {
//                 currSum += Prices[k]; // for prnitng the current sum  of every subarray possible from every element
//             }
//             cout << currSum << ",";
//             maxSum = max(maxSum, currSum);
//         }
//         cout << endl;
//     }
//     cout << "Maximum Subarray sum is - " << maxSum << endl;
// }

// int main()
// {
//     int n;
//     cout << "value of array size" << endl;
//     cin >> n;

//     int Prices[n];
//     cout << "Write down the array elemenets - " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> Prices[i];
//     }
//     cout << "So, the inserted array is - " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << Prices[i] << " ";
//     }
//     cout << endl;

//     maxSubArraySum(Prices, n);

//     /*
//     value of array size
//     6
//     Write down the array elemenets -
//     2 -3 6 -5 4 2
//     So, the inserted array is -
//     2 -3 6 -5 4 2
//     Noe for maximum subarray sum -
//     2,-1,5,0,4,6,
//     -3,3,-2,2,4,
//     6,1,5,7,
//     -5,-1,1,
//     4,6,
//     2,
//     Maximum Subarray sum is - 7

//     T.C - O(n^3)
//      */
// }
// ____________ ____________

// 9.2 - SLightly Optimizede approch - for decreasing the time complexity

// void maxSubArraySum2(int Prices[], int n)
// {
//     int maxSUm = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         int currSum = 0;
//         for (int j = i; j < n; j++)
//         {
//             currSum += Prices[j];
//             maxSUm = max(maxSUm, currSum);
//         }
//         cout << endl;
//     }
//     cout << "Maximum Subarray sum is - " << maxSUm << endl;
// }
// int main()
// {
//     int n;
//     cout << "value of array size" << endl;
//     cin >> n;

//     int Prices[n];
//     cout << "Write down the array elemenets - " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> Prices[i];
//     }
//     cout << "So, the inserted array is - " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << Prices[i] << " ";
//     }
//     cout << endl;

//     // maxSubArraySum(Prices, n);
//     maxSubArraySum2(Prices, n);

//     /*
//     value of array size
//     6
//     Write down the array elemenets -
//     2 -3 6 -5 4 2
//     So, the inserted array is -
//     2 -3 6 -5 4 2

//     Maximum Subarray sum is - 7
//         T.C - O(n^2)
//      */
// }
// ____________ ____________

// 9.3 - Using Most Optimized Approach - Kadane's Algorithms. For very less TIme Complexity

// void maxSubArraySum3(int Prices[], int n)
// {
//     int maxSUm = INT_MIN;
//     int currSum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         currSum += Prices[i];
//         maxSUm = max(maxSUm, currSum);
//         if (currSum < 0)
//         {
//             currSum = 0;
//         }
//     }
//     cout << "Maximum Subarray sum is - " << maxSUm << endl;
// }
// int main()
// {
//     int n;
//     cout << "value of array size" << endl;
//     cin >> n;

//     int Prices[n];
//     cout << "Write down the array elemenets - " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> Prices[i];
//     }
//     cout << "So, the inserted array is - " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << Prices[i] << " ";
//     }
//     cout << endl;

//     // maxSubArraySum(Prices, n);
//     maxSubArraySum3(Prices, n);
//     /*
//     value of array size
//     6
//     Write down the array elemenets -
//     2 -3 6 -5 4 2
//     So, the inserted array is -
//     2 -3 6 -5 4 2
//     Maximum Subarray sum is - 7
//     T.C - O(n)
//      */
// }
// ____________ ____________ ____________ ____________ ____________

//10) bUY & sELL sTOCK pROBLEM-

// void maxprofit(int Prices[], int n)
// {
//     int bestBuy[100000]; // as per the given max limits
//     bestBuy[0] = INT_MAX;

//     for (int i = 0; i < n; i++)
//     {
//         bestBuy[i] = min(bestBuy[i - 1], Prices[i - 1]);
//     }

//     int maxProfit = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int currProfit = Prices[i] - bestBuy[i];
//         maxProfit = max(maxProfit, currProfit);
//     }
//     cout << "MaxProfit is - " << maxProfit << endl;
// }
// int main()
// {
//     int n;
//     cout << "what is the vale of n - " << endl;
//     cin >> n;

//     int Prices[n];
//     cout << "Mentin the array elementa" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> Prices[i];
//     }
//     cout << "So, the entered elements of array is - " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << Prices[i] << " ";
//     }
//     cout << endl;
//     maxprofit(Prices, n);

//     /*
//     what is the vale of n -
//     5
//     Mentin the array elementa
//     9 5 15 8 2
//     So, the entered elements of array is -
//     9 5 15 8 2
//     MaxProfit is - 15

//     what is the vale of n -
//     6
//     Mentin the array elementa
//     7 1 5 3 6 4
//     So, the entered elements of array is -
//     7 1 5 3 6 4
//     MaxProfit is - 7
//      */
// }
// ____________ ____________ ____________ ____________ ____________

//11) Trapping Rainwater Problem -
int Trap(int heights[], int n)
{
    int leftMax[20000], rightMax[20000];
    leftMax[0] = heights[0];
    rightMax[n - 1] = heights[n - 1];

    // For getting the left max side for every bars
    cout << "So, the Left Valley max values for each bar is - " << endl;
    cout << leftMax[0] << ",";
    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], heights[i - 1]);
        cout << leftMax[i] << ",";
    }

    // Similarly For getting the right max side for every bars
    cout << "again the right valley max values for each bar is - " << endl;

    for (int i = n - 2; i >= 0; i--)
    {
        rightMax[i] = max(rightMax[i + 1], heights[i + 1]);
        cout << rightMax[i] << ",";
    }
    cout << rightMax[n - 1] << ",";
    cout << endl;

    int WaterTrappedd = 0;
    for (int i = 0; i < n; i++)
    {
        int currWater = min(leftMax[i], rightMax[i]) - heights[i];
        if (currWater > 0)
        {
            WaterTrappedd += currWater;
        }
    }
    cout << "So, the Water Trapp is - " << WaterTrappedd << endl;
    return WaterTrappedd;
}

int main()
{
    int n;
    cout << "value of array size" << endl;
    cin >> n;

    int heights[n];
    cout << "Write down the array elemenets - " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }
    cout << "So, the inserted array is - " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << heights[i] << " ";
    }
    cout << endl;
    Trap(heights, n);

    /*
    value of array size
    7
    Write down the array elemenets -
    4  2 0 6 3 2 5
    So, the inserted array is -
    4 2 0 6 3 2 5
    So, the Left Valley max values for each bar is -
    4,4,4,4,6,6,6,again the right valley max values for each bar is -
    5,5,5,6,6,6,5,
    So, the Water Trapp is - 11


    value of array size
    5
    Write down the array elemenets -
    5 4 3 2 1
    So, the inserted array is -
    5 4 3 2 1
    So, the Left Valley max values for each bar is -
    5,5,5,5,5,again the right valley max values for each bar is -
    1,2,3,4,1,
    So, the Water Trapp is - 0

    T.C - O(n)

    */
}
// ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________
