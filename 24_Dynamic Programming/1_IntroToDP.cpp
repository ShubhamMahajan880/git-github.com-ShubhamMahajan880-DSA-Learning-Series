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
// #include<unordered_set>using namespace std;
using namespace std;

// Dynamic Programming OR Optimized Recursion Programming -
// 1) Overview for DP -

// Fibonacci Sequeuce using Recursion -

// int fibonacci(int n)// O(2^n)
// {
//     if (n == 0 || n == 1)
//     {
//         return n;
//     }

//     return fibonacci(n - 1) + fibonacci(n - 2);
// }
// int main()
// {
//     cout << fibonacci(6) << endl; // 8
// }
// -------------------

// using Optimized Recursion(DP) -

// int fibDP(int n, vector<int> &f) // o(n)
// {
//     if (n == 0 || n == 1)
//     {
//         return n;
//     }

//     if (f[n] != -1) // this restoring data structure performs DP.
//     {
//         return f[n];
//     }

//     f[n] = fibDP(n - 1, f) + fibDP(n - 2, f);
//     return f[n];
// }
// int main()
// {
//     int n = 6;
//     vector<int> f(n + 1, -1);    // This additional data structure is responsible for optimized rfecursion(DP)
//     cout << fibDP(n, f) << endl; // 8
// }
// ____________ ____________

// What is DP & When to use it -
/*
How to recognize DP Problem -
1 - Optimal Substructure - agr prblm ke chhote chote solutions ko solve kr k badi problem ka solution mil paa raha he to its OPTIMAL SUBSTRUCTURE
2 - Overlapping Suproblem - where Recursion applicable.(recursion with choices ie. multiple branches)

where these two conditions satisfies then DP applicable.
- In fibonacci, it satisfies both - Optimal Sub structure & Overlapping Subproblem
- ut in natural no. sum - it satiesfies Optimal Substructure but not satiesfies to Overlapping Subproblem.1
*/

// int sum(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     return sum(n - 1) + n;
// }
// int main()
// {

//     cout << sum(10) << endl; // 55
// }
// So, on dry run its Oprimal Substructure where sum of 10 terms can be get by sum of individial term. But it's not Overlapping Subproblem because no multiple branches only single call for single number
// ____________ ____________
// Types of using DP -
/*
1 - Memoization - uSes Top to Bottom Approach and it uses Recursive Approach
2 - Tabulation - and it uses Bottom to Top approach it uses Iterative Approach
Memoization guarante nhi deta ki hr ek chhoti problem/possible solution call/calculate hui hogi/hua hoga and bs recursion waale logic ko folow krta he, lekin leking leking Tabulation hmesha GUARANTEE deta he ki hr ek chhoti problem hmesha call hui hogi.
*/

//  using Tablulation Approach -

// int fibTab(int n) // O(ns)
// {
//     vector<int> fib(n + 1, 0); // fib[i] => ith fib
//     fib[0] = 0;
//     fib[1] = 1;

//     for (int i = 2; i <= n; i++)
//     {
//         fib[i] = fib[i - 1] + fib[i - 2];
//     }
//     return fib[n];
// }

// int main()
// {
//     int n = 6;
//     vector<int> f(n + 1, -1);
//     cout << fibTab(n) << endl; // 8
// }
// ____________ ____________ ____________ ____________ ____________

// 2) DP Patterns using QUns -

// 2.1) Pattern - I : Fibonacci Pattern
// 1) CLimbing Stairs Problem -

// int climbingStairs(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }

//     return climbingStairs(n - 1) + climbingStairs(n - 2);
// }

// int main()
// {
//     cout << climbingStairs(1) << endl; // 1
//     cout << climbingStairs(2) << endl; // 2
//     cout << climbingStairs(3) << endl; // 3
//     cout << climbingStairs(4) << endl; // 5
//     cout << climbingStairs(5) << endl; // 8
// }

//----Now using the DP using MEMOIZATION -

// int countWaysMem(int n, vector<int> &dp) // O(n) after Dp  Memoization optimized recursion
// {
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }
//     if (dp[n] != -1)
//     {
//         return dp[n];
//     }

//     dp[n] = countWaysMem(n - 1, dp) + countWaysMem(n - 2, dp);
//     return dp[n];
// }
// int main()
// {
//     int n = 5;
//     vector<int> dp(n + 1, -1);
//     cout << countWaysMem(n, dp) << endl; // 8

//     /*
//     int n = 6;
//     vector<int> dp(n + 1, -1);
//     cout << countWaysMem(n, dp) << endl; // 13
//      */
// }

//----Now using the DP using TABULATION -

// int countWaysMem(int n, vector<int> &dp) // O(n)
// {
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }
//     if (dp[n] != -1)
//     {
//         return dp[n];
//     }

//     dp[n] = countWaysMem(n - 1, dp) + countWaysMem(n - 2, dp);
//     return dp[n];
// }

// int countWayTab(int n)
// {
//     vector<int> dp(n + 1, 0);
//     dp[0] = 1;
//     dp[1] = 1;

//     for (int i = 2; i <= n; i++)
//     {
//         dp[i] = dp[i - 1] + dp[i - 2];
//     }

//     return dp[n];
// }
// int main()
// {
//     int n = 5;
//     cout << countWayTab(n) << endl; // 8

//     /*
//     int n = 6;
//     cout << countWayTab(n) << endl;//13
//      */
// }
// -------------------

// 1.1) CLimbing Stairs Problem Variaation - When 3 jumps are allowed

// int countWaysMem(int n, vector<int> &dp) // O(n)
// {
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }
//     if (dp[n] != -1)
//     {
//         return dp[n];
//     }

//     dp[n] = countWaysMem(n - 1, dp) + countWaysMem(n - 2, dp);
//     return dp[n];
// }

// int countWayTab(int n)
// {
//     vector<int> dp(n + 1, 0);
//     dp[0] = 1;
//     dp[1] = 1;
//     dp[2] = 2;

//     for (int i = 3; i <= n; i++)
//     {
//         dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
//     }

//     return dp[n];
// }
// int main()
// {
//     int n = 4;
//     cout << countWayTab(n) << endl; // 7

//     /*
//     int n = 5;
//     cout << countWayTab(n) << endl;//13
//      */
// }

// ____________ ____________ ____________ ____________ ____________

// 2.2) Pattern - II : Knapsack Problem Pattern
/*
1) Fractional Knapsack(Greedy) - Uses foir the measurable quntities.Ex- Salf,Oil,Sugar
2) 0-1 Kanpsack(DP) - Uses for 0-1 either purchased the item or not.Ex- Laptop, Mobile, Device.
3) Unbounded Knapsack(DP) - Uses for more devices/Items more than 1.Ex- 4 Laptops, 2 mobiles
 */

//  2.2.1 - 0-1 Knapsack Problem -

// int knapsackRec(vector<int> val, vector<int> wt, int w, int n) // O(2^n)
// {
//     if (n == 0 || w == 0)
//     {
//         return 0;
//     }
//     int itemWt = wt[n - 1];
//     int itemVal = val[n - 1];

//     if (itemWt <= w) // valid wt
//     {
//         // include
//         int ans1 = knapsackRec(val, wt, w - itemWt, n - 1) + itemVal;

//         // exclude
//         int ans2 = knapsackRec(val, wt, w, n - 1);

//         return max(ans1, ans2);
//     }
//     else
//     {
//         // exclude
//         return knapsackRec(val, wt, w, n - 1);
//     }
// }

// int main()
// {
//     vector<int> val = {15, 14, 10, 45, 30};
//     vector<int> wt = {2, 5, 1, 3, 4};
//     int w = 7;
//     int n = 5;

//     cout << knapsackRec(val, wt, w, n) << endl;//75

// /*
// Can we use Dp in 0-1 knapsack problem -
// 1- Optimal Substructure - Yes, because chhote weights and value bade ko value proivde kra rhe he.
// 2- Overlapping Subproblem - Yes repeating conditions. where everything is same, capacity also.
//  */
// }
// -------------------

//  2.2.1 - 0-1 Knapsack Problem DP(using Memoization) -

// int knapsackMemoi(vector<int> val, vector<int> wt, int w, int n, vector<vector<int>> &dp) // O(n*w)
// {
//     if (n == 0 || w == 0)
//     {
//         return 0;
//     }
//     if (dp[n][w] != -1)
//     {
//         return dp[n][w];
//     }

//     int itemWt = wt[n - 1];
//     int itemVal = val[n - 1];

//     if (itemWt <= w) // valid wt
//     {
//         // include
//         int ans1 = knapsackMemoi(val, wt, w - itemWt, n - 1, dp) + itemVal;

//         // exclude
//         int ans2 = knapsackMemoi(val, wt, w, n - 1, dp);

//         return max(ans1, ans2);
//     }
//     else
//     {
//         // exclude
//         return knapsackMemoi(val, wt, w, n - 1, dp);
//     }
//     return dp[n][w];
// }

// int main()
// {
//     vector<int> val = {15, 14, 10, 45, 30};
//     vector<int> wt = {2, 5, 1, 3, 4};
//     int w = 7;
//     int n = 5;

//     vector<vector<int>> dp(n + 1, vector<int>(w + 1, -1));
//     cout << knapsackMemoi(val, wt, w, n, dp) << endl; // 75

//     cout << "Memoization Matrix - " << endl;
//     for (int i = 0; i < n + 1; i++)
//     {
//         for (int j = 0; j < w + 1; j++)
//         {
//             cout << dp[i][j] << " ";
//         }
//         cout << endl;
//     }

//     /*
//     75
//     Memoization Matrix -
//     -1 -1 -1 -1 -1 -1 -1 -1
//     -1 -1 -1 -1 -1 -1 -1 -1
//     -1 -1 -1 -1 -1 -1 -1 -1
//     -1 -1 -1 -1 -1 -1 -1 -1
//     -1 -1 -1 -1 -1 -1 -1 -1
//     -1 -1 -1 -1 -1 -1 -1 -1

//      */
// }
// -------------------

//  2.2.1 - 0-1 Knapsack Problem DP(using Tabulaiton) -

// int knapsackTab(vector<int> val, vector<int> wt, int w, int n) // O(n*w)
// {
//     vector<vector<int>> dp(n + 1, vector<int>(w + 1, 0));

//     for (int i = 1; i < n + 1; i++)
//     {
//         for (int j = 0; j < w + 1; j++)
//         {
//             int itemWt = wt[i - 1];
//             int itemVal = val[i - 1];

//             if (itemWt <= j)
//             {
//                 dp[i][j] = max(itemVal + dp[i - 1][j - itemWt], dp[i - 1][j]);
//             }
//             else
//             {
//                 dp[i][j] = dp[i - 1][j];
//             }
//         }
//     }

//     for (int i = 0; i < n + 1; i++)
//     {
//         for (int j = 0; j < w + 1; j++)
//         {
//             cout << dp[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return dp[n][w];
// }

// int main()
// {
//     vector<int> val = {15, 14, 10, 45, 30};
//     vector<int> wt = {2, 5, 1, 3, 4};
//     int w = 7;
//     int n = 5;
//     vector<vector<int>> dp(n + 1, vector<int>(w + 1, -1));

//     cout << knapsackTab(val, wt, w, n) << endl; // 75
//     /*
//     0 0 0 0 0 0 0 0
//     0 0 15 15 15 15 15 15
//     0 0 15 15 15 15 15 29
//     0 10 15 25 25 25 25 29
//     0 10 15 45 55 60 70 70
//     0 10 15 45 55 60 70 75
//     75

//      */
// }

// -------------------

//  2.2.1 - Target Sum Subset -
/*
Jaha bhi item ko Include/Exclude krna hota he vaha branches hoti h and jaha branches hoti he vaha overlapping hoti he. and if its also optimal subseequenced the dp can be  implement
 */

// bool targetSum(vector<int> nums, int target)
// {
//     int n = nums.size();
//     vector<vector<int>> dp(n + 1, vector<int>(target + 1, 0));

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= target; j++)
//         {
//             if (nums[i - 1] <= j)
//             {
//                 dp[i][j] = max(nums[i - 1] + dp[i - 1][j - nums[i - 1]], dp[i - 1][j]);
//             }
//             else
//             {
//                 dp[i][j] = dp[i - 1][j];
//             }
//         }
//     }
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j <= target; j++)
//         {
//             cout << dp[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return dp[n][target] == target;
// }

// int main()
// {
//     vector<int> nums = {4, 2, 7, 1, 3};

//     int target = 10;
//     cout << targetSum(nums, target) << endl; // 1
//     /*
// 0 0 0 0 0 0 0 0 0 0 0
// 0 0 0 0 4 4 4 4 4 4 4
// 0 0 2 2 4 4 6 6 6 6 6
// 0 0 2 2 4 4 6 7 7 9 9
// 0 1 2 3 4 5 6 7 8 9 10
// 0 1 2 3 4 5 6 7 8 9 10
// 1

//      */

//     /* int target = 25;
//     cout << targetSum(nums, target) << endl;//0
//      */
// }

// ____________ ____________ ____________ ____________ ____________

// 2.3) Pattern - III : Unbounded Knapsack -

/*
- In the cases where we have unlimited items/things.
- 0-1 Knapsack ke under item kevel ek baar aa skta h .. while unbounded knapsack ke underitem can appear for many times
- The only change b/w 0-1 knpsack and unbounded knapsack is in the inclusioon condition. it's for i not for i-1. Just one difference b/w both.
 */

// int unboundedKnapsack(vector<int> val, vector<int> wt, int W, int n)
// {
//     vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

//     for (int i = 1; i < n + 1; i++)
//     {
//         for (int j = 1; j < W + 1; j++)
//         {
//             int itemVal = val[i - 1];
//             int itemWt = wt[i - 1];

//             if (itemWt <= j)
//             {
//                 dp[i][j] = max(itemVal + dp[i][j - itemWt], dp[i - 1][j]);
//             }
//             else
//             {
//                 dp[i][j] = dp[i - 1][j];
//             }
//         }
//     }
//     return dp[n][W];
// }
// int main()
// {
//     vector<int> val = {15, 14, 10, 45, 30};
//     vector<int> wt = {2, 5, 1, 3, 4};
//     int w = 7;
//     int n = 5;

//     cout << unboundedKnapsack(val, wt, w, n) << endl;//100
// }
// ____________ ____________

// 2.3.1 -  Leetcode 518 - Coin Change - II Coin Change Problem -
// Using Tabulation -

// class Solution
// {
// public:
//     int change(int amount, vector<int> &coins)
//     {
//         int n = coins.size();
//         vector<vector<int>> dp(n + 1, vector<int>(amount + 1, 0));

//         // Base case: if amount = 0 → 1 way (no coin taken)
//         for (int i = 0; i < n + 1; i++)
//         {
//             dp[i][0] = 1;
//         }

//         // Filling DP table
//         for (int i = 1; i < n + 1; i++)
//         {
//             for (int j = 1; j < amount + 1; j++)
//             {
//                 if (coins[i - 1] <= j) // valid case
//                 {
//                     dp[i][j] = dp[i][j - coins[i - 1]] + dp[i - 1][j];
//                 }
//                 else // invalid case
//                 {
//                     dp[i][j] = dp[i - 1][j];
//                 }
//             }
//         }

//         // Debug: print DP table
//         cout << "DP Table:\n";
//         for (int i = 0; i < n + 1; i++)
//         {
//             for (int j = 0; j < amount + 1; j++)
//             {
//                 cout << dp[i][j] << " ";
//             }
//             cout << "\n";
//         }

//         return dp[n][amount];
//     }
// };

// int main()
// {
//     Solution sol;

//     int amount;
//     cout << "Enter amount: ";
//     cin >> amount;

//     int n;
//     cout << "Enter number of coins: ";
//     cin >> n;

//     vector<int> coins(n);
//     cout << "Enter coin denominations: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> coins[i];
//     }

//     int result = sol.change(amount, coins);
//     cout << "\nNumber of combinations: " << result << endl;

// /*
// Enter amount: 5
// Enter number of coins: 3
// Enter coin denominations: 1 2 5
// DP Table:
// 1 0 0 0 0 0
// 1 1 1 1 1 1
// 1 1 2 2 3 3
// 1 1 2 2 3 4

// Number of combinations: 4

// */
// }
// ____________ ____________

// 2.3.2 - ROd Cuttitng Problem -

// int rodCutting(vector<int> price, vector<int> length, int rodLength)
// {
//     int n = length.size();
//     vector<vector<int>> dp(n + 1, vector<int>(rodLength + 1, 0));

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= rodLength; j++)
//         {
//             if (length[i - 1] <= j)
//             {
//                 dp[i][j] = max(price[i - 1] + dp[i][j - length[i - 1]],
//                                dp[i - 1][j]);
//             }
//             else
//             {
//                 dp[i][j] = dp[i - 1][j];
//             }
//         }
//     }
//     return dp[n][rodLength];
// }

// int main()
// {
//     vector<int> price = {1, 5, 8, 9, 10, 17, 17, 20};
//     vector<int> length = {1, 2, 3, 4, 5, 6, 7, 8};
//     int rodLength = 8;

//     cout << "Maximum profit = " << rodCutting(price, length, rodLength) << endl;
//     // Maximum profit = 22
// }
// ____________ ____________

// 2.3.3 - Leetcode 1547 - Min cost to cut sticks

// ____________ ____________ ____________ ____________ ____________

// 2.4) Pattern - IV : Longest Common Subsequence Problem Pattern -

// 2.4.1) Using Recursion -
/*
the core logic is - agr dono c=strings ka last ka charaacter same he to dono me atleast 1 to lcs he hi to - 1 + string1 ki length and string2 ki length. which is clearly recursion for remaining string
2nd agr last char ya koi char same nhi he to recursion by removing the last charcater respectively for (string1 ki lenght -1)(string2 length) ya (string2 ki lenght -1)(string1 length)
*/

// int lcsRec(string str1, string str2)// O(2^n+m)
// {
//     if (str1.size() == 0 || str2.size() == 0)
//     {
//         return 0;
//     }

//     int n = str1.size();
//     int m = str2.size();

//     if (str1[n - 1] == str2[m - 1])
//     {
//         return 1 + lcsRec(str1.substr(0, n - 1), str2.substr(0, m - 1));
//     }
//     else
//     {
//         int ans1 = lcsRec(str1.substr(0, n - 1), str2);
//         int ans2 = lcsRec(str1, str2.substr(0, m - 1));
//         return max(ans1, ans2);
//     }
// }
// int main()
// {
//     string str1 = "abcdge";
//     string str2 = "abedg";

//     cout << lcsRec(str1, str2) << endl;//4
// }
// -------------------

// 2.4.1) Using Memoization -

// int lcsMemoI(string &str1, string &str2, int n, int m, vector<vector<int>> &dp)
// {
//     if (n == 0 || m == 0)
//         return 0;

//     if (dp[n][m] != -1)
//         return dp[n][m];

//     if (str1[n - 1] == str2[m - 1])
//         return dp[n][m] = 1 + lcsMemoI(str1, str2, n - 1, m - 1, dp);
//     else
//     {
//         int ans1 = lcsMemoI(str1, str2, n - 1, m, dp);
//         int ans2 = lcsMemoI(str1, str2, n, m - 1, dp);
//         return dp[n][m] = max(ans1, ans2);
//     }
// }

// int main()
// {
//     string str1 = "abcdge";
//     string str2 = "abedg";
//     int n = str1.size();
//     int m = str2.size();

//     vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
//     cout << lcsMemoI(str1, str2, n, m, dp) << endl; // 4

//     /*
//     string str1 = "abcd";
//     string str2 = "aceb";
//     cout << lcsMemoI(str1, str2, n, m, dp) << endl; // 2
//      */
// }

// -------------------

// 2.4.1) Using Tabulation -

// int lcsTabu(string str1, string str2) // O(n*m)
// {
//     int n = str1.size();
//     int m = str2.size();

//     vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

//     for (int i = 1; i < n + 1; i++)
//     {
//         for (int j = 1; j < m + 1; j++)
//         {
//             if (str1[i - 1] == str2[j - 1])
//             {
//                 dp[i][j] = dp[i - 1][j - 1] + 1;
//             }
//             else
//             {
//                 dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//             }
//         }
//     }
//     return dp[n][m];
// }

// int main()
// {
//     string str1 = "abcdge";
//     string str2 = "abedg";
//     int n = str1.size();
//     int m = str2.size();

//     cout << lcsTabu(str1, str2) << endl; // 4

//     /*
//     string str1 = "abc";
//     string str2 = "xyz";
//     cout << lcsMemoI(str1, str2) << endl; // 1
//      */
// }
// ____________ ____________ 

// 2.4.1) - 