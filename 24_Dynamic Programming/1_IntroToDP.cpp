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

