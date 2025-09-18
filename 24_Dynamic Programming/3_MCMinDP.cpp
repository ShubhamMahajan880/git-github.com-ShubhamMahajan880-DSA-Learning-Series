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
// #include<list>
// #include<iterator>
// #include<stack>
// #include <queue>
// #include <deque>
// #include <map>;
// #include <set>;
// #include<unordered_map>
// #include<unordered_set>
using namespace std;

// 2.6) Pattern - VI : Matric Chain Multiplication(MCM)
/*
- agr single matricx he to akela h to kisi ke saath multiplication to hoga nhi isliye basew case hit krega which is equal to 0.
- Matrix multipplicaiton condition - No of colm of 1st Mat = no. of roes of 2nd Mar.
- No. of operations in matrix multilican - a*b and c*d then resultaant matrix size  = a*d & operations = a*b/c*d
 */

// 2.6.1) using  Recursion -

// int matrixChainMultiplicationRecursion(vector<int> arr, int i, int j)
// {
//     if (i == j)
//     {
//         return 0;
//     }

//     int ans = INT_MAX;

//     for (int k = i; k < j; k++)
//     // (i,k)
//     {
//         int cost1 = matrixChainMultiplicationRecursion(arr, i, k);

//         // (k+1,j)
//         int cost2 = matrixChainMultiplicationRecursion(arr, k + 1, j);

//         // curr partition cost
//         int currCost = cost1 + cost2 + (arr[i - 1] * arr[k] * arr[j]);
//         ans = min(ans, currCost);
//     }
//     return ans;
// }
// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 3};
//     int n = arr.size();
//     cout << matrixChainMultiplicationRecursion(arr, 1, n - 1) << endl;//30
// }
// -------------------

/*
Is DP applicable -
YEs both satisfying
 */

// 2.6.1.2) using Memoization -
/*
Yaha Memoizaiton me dp ka size n le rhe h kyuuki - Array already n-1 size tk ka he.
 */

// int matrixChainMultiplicationMemoI(vector<int> arr, int i, int j, vector<vector<int>> &dp)
// {
//     if (i == j)
//     {
//         return 0;
//     }

//     if (dp[i][j] != -1)
//     {
//         return dp[i][j];
//     }

//     int ans = INT_MAX;

//     for (int k = i; k < j; k++)
//     // (i,k)
//     {
//         int cost1 = matrixChainMultiplicationMemoI(arr, i, k, dp);

//         // (k+1,j)
//         int cost2 = matrixChainMultiplicationMemoI(arr, k + 1, j, dp);

//         // curr partition cost
//         int currCost = cost1 + cost2 + (arr[i - 1] * arr[k] * arr[j]);
//         ans = min(ans, currCost);
//     }
//     return dp[i][j] = ans;
// }
// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 3};
//     int n = arr.size();
//     vector<vector<int>> dp(n, vector<int>(n, -1));
//     cout << matrixChainMultiplicationMemoI(arr, 1, n - 1, dp) << endl; // 30
// }
// -------------------

// 2.6.1.3) using Tabulation -

// We remeber - Jo recurison ka Base Case hota he vai tabuation me ander initialize ki condition hoti he

// int matrixChainMultiplicationTabulation(vector<int> arr) // O(n^3)
// {
//     int n = arr.size();
//     vector<vector<int>> dp(n, vector<int>(n, 0));

//     // dp[i][i] = 0 (only one matrix, no multiplication)
//     for (int i = 1; i < n; i++)
//     {
//         dp[i][i] = 0;
//     }

//     // bottom up fill
//     for (int len = 2; len < n; len++) // length of chain
//     {
//         for (int i = 1; i <= n - len; i++)
//         {
//             int j = i + len - 1;
//             dp[i][j] = INT_MAX;

//             for (int k = i; k < j; k++)
//             {
//                 int cost1 = dp[i][k];
//                 int cost2 = dp[k + 1][j];
//                 int currCost = cost1 + cost2 + (arr[i - 1] * arr[k] * arr[j]);
//                 dp[i][j] = min(dp[i][j], currCost);
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << dp[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return dp[1][n - 1];
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 3}; // n-> n-1 matrices (1 to n-1)

//     cout << matrixChainMultiplicationTabulation(arr) << endl;
//     /*
//     0 0 0 0 0
//     0 0 6 18 30
//     0 0 0 24 48
//     0 0 0 0 36
//     0 0 0 0 0

//     30
//     */
// }
// ____________ ____________
