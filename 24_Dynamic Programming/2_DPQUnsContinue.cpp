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

// Using Memoization -

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

// Using Tabulation -

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

// 2.4.2) -Longest Common SUbstring -
/*
Subsequece - possible sequecen from the string
Substring - Sequencein Continuos way from string
- Logic Diff. - in else waala case e=where the last char of  both the string isn't common, then return No.
 */

//  Using Tabulation only -

// int longestCommonSubstring(string str1, string str2)
// {
//     int n = str1.size();
//     int m = str2.size();
//     int ans = 0;

//     vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

//     for (int i = 1; i < n + 1; i++)
//     {
//         for (int j = 1; j < m + 1; j++)
//         {
//             if (str1[i - 1] == str2[j - 1])
//             {
//                 dp[i][j] = 1 + dp[i - 1][j - 1];
//                 ans = max(ans, dp[i][j]);
//             }
//             else
//             {
//                 dp[i][j] = 0;
//             }
//         }
//     }

//     for (int i = 1; i < n + 1; i++)
//     {
//         for (int j = 1; j < m + 1; j++)
//         {
//             cout << dp[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return ans;
// }
// int main()
// {
//     string str1 = "abcde";
//     string str2 = "abgce";

//     cout << longestCommonSubstring(str1, str2) << endl; // 2

//     /*
// 1 0 0 0 0
// 0 2 0 0 0
// 0 0 0 1 0
// 0 0 0 0 0
// 0 0 0 0 1
// 2
// */
// }
// ____________ ____________

// 2.4.3) -Longest Increasing Subsequence -

/*
approach - Another aray ko sort krenge increasing me, duplicate remove krenge and previous array ke saath isarray se common nikalenge. jo order aayag vhi LCS hoga.
 */

// int LIS(vector<int> arr) // O(n^2)
// {
//     unordered_set<int> s(arr.begin(), arr.end()); // Unique - O(n)

//     vector<int> arr2(s.begin(), s.end());
//     sort(arr2.begin(), arr2.end()); // Ascendign Sorted Order - O(n logn)

//     // LC => LIS
//     int n = arr.size();
//     int m = arr2.size();
//     vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

//     for (int i = 1; i < n + 1; i++) // O(n*n)
//     {
//         for (int j = 1; j < m + 1; j++)
//         {
//             if (arr[i - 1] == arr2[j - 1])
//             {
//                 dp[i][j] = 1 + dp[i - 1][j - 1];
//             }
//             else
//             {
//                 dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//             }
//         }
//     }

//     for (int i = 1; i < n + 1; i++)
//     {
//         for (int j = 1; j < m + 1; j++)
//         {
//             cout << dp[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return dp[n][m];
// }

// int main()
// {
//     vector<int> arr = {50, 3, 10, 7, 40, 80};
//     cout << LIS(arr) << endl;

//     /*
// 0 0 0 0 1 1
// 1 1 1 1 1 1
// 1 1 2 2 2 2
// 1 2 2 2 2 2
// 1 2 2 3 3 3
// 1 2 2 3 3 4
// 4

//      */
// }
// ____________ ____________

// 2.4.4) - Leetcode - 72) Edit Distance -

// using Tabulation Approach

// class Solution
// {
// public:
//     int minDistance(string word1, string word2) // O(n*m)
//     {
//         int n = word1.size();
//         int m = word2.size();
//         vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

//         // Initialize first row (insert operations)
//         for (int j = 0; j <= m; j++)
//         {
//             dp[0][j] = j;
//         }

//         // Initialize first column (delete operations)
//         for (int i = 0; i <= n; i++)
//         {
//             dp[i][0] = i;
//         }

//         // Bottom-up DP
//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 1; j <= m; j++)
//             {
//                 if (word1[i - 1] == word2[j - 1])
//                 {
//                     dp[i][j] = dp[i - 1][j - 1];
//                 }
//                 else
//                 {
//                     dp[i][j] = 1 + min({dp[i][j - 1],       // Insert
//                                         dp[i - 1][j],       // Delete
//                                         dp[i - 1][j - 1]}); // Replace
//                 }
//             }
//         }

//         // Debug print DP table
//         cout << "DP Table:" << endl;
//         for (int i = 0; i <= n; i++)
//         {
//             for (int j = 0; j <= m; j++)
//             {
//                 cout << dp[i][j] << " ";
//             }
//             cout << endl;
//         }

//         return dp[n][m];
//     }
// };

// int main()
// {
//     Solution sol;
//     string word1 = "horse";
//     string word2 = "ros";
//     cout << "Minimum Edit Distance: " << sol.minDistance(word1, word2) << endl;

//     /*
// DP Table:
// 0 1 2 3
// 1 1 2 3
// 2 2 1 2
// 3 2 2 2
// 4 3 3 2
// 5 4 4 3
// Minimum Edit Distance: 3

//      */
// }
// ____________ ____________

// 2.4.5) - Leetcode - 44)  WildCard Matching Problem -
/*
WildCard - means a character which can be replaced by aother character. Ex - during pass type the charcaters are replaced by Aestric *
 */

//  using Tabulation Approach - 

// class Solution
// {
// public:
//     bool isMatch(string t, string p)// O(n*m)
//     {
//         int n = t.size();
//         int m = p.size();

//         vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));
//         dp[0][0] = true;

//         // Handle pattern prefixes with '*'
//         for (int j = 1; j <= m; j++)
//         {
//             if (p[j - 1] == '*')
//             {
//                 dp[0][j] = dp[0][j - 1];
//             }
//         }

//         // Bottom-up DP
//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 1; j <= m; j++)
//             {
//                 if (t[i - 1] == p[j - 1] || p[j - 1] == '?')
//                 {
//                     dp[i][j] = dp[i - 1][j - 1];
//                 }
//                 else if (p[j - 1] == '*')
//                 {
//                     // '*' can match empty (dp[i][j-1]) or one char (dp[i-1][j])
//                     dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
//                 }
//             }
//         }

//         // Debug: print DP table
//         cout << "DP Table:" << endl;
//         for (int i = 0; i <= n; i++)
//         {
//             for (int j = 0; j <= m; j++)
//             {
//                 cout << dp[i][j] << " ";
//             }
//             cout << endl;
//         }

//         return dp[n][m];
//     }
// };

// int main()
// {
//     Solution sol;

//     string text = "adceb";
//     string pattern = "*a*b";

//     cout << "Text: " << text << endl;
//     cout << "Pattern: " << pattern << endl;

//     bool result = sol.isMatch(text, pattern);
//     cout << "Match Result: " << (result ? "True" : "False") << endl;

//     /*
//     Text: adceb
// Pattern: *a*b
// DP Table:
// 1 1 0 0 0
// 0 1 1 1 0
// 0 1 0 1 0
// 0 1 0 1 0
// 0 1 0 1 0
// 0 1 0 1 1
// Match Result: True

//      */
// }
// ____________ ____________ ____________ ____________ ____________

// 2.5) Pattern - V : Catalan's Number
/*
Catlan Number is also simlar to Fibonacci somehow. For c0 & c1 having value = 1
and for any nth term Catlan's Number can be given as-
Cn = 0 to n-1
   * n-1 to 0
 */

// 2.5.1) Catan's Number using Recursion -

// int catalanRec(int n)//o(2^n)
// {
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }
//     int ans = 0;
//     ;
//     for (int i = 0; i < n; i++)
//     {
//         ans += catalanRec(i) * catalanRec(n - i - 1);
//     }
//     return ans;
// }

// int main()
// {
//     int n = 4;

//     cout << catalanRec(n) << endl; // 14

//     for (int i = 0; i < 6; i++)
//     {
//         cout << catalanRec(i) << " ";
//     }
//     cout << endl; // 1 1 2 5 14 42
// }
// -------------------

// Catan's Number using Memoization -
/*
is Dp applicable here -
1) Optimal Subsequecne  - yes, for getting c4 need to claclulate small small resulyts first
2) Overlapping Subprobnle, - so, clealr overlapping many times. For calculating c4 need to calculaye c2 for many times, hence clearly DP applicable as both the condition are satisfying
 */

// int catalanMemoI(int n, vector<int> &dp)// O(n^2)
// {
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }

//     if (dp[n] != -1)
//     {
//         return dp[n];
//     }

//     int ans = 0;
//     ;
//     for (int i = 0; i < n; i++)
//     {
//         ans += catalanMemoI(i, dp) * catalanMemoI(n - i - 1, dp);
//     }
//     return dp[n] = ans;
// }

// int main()
// {
//     int n = 6;
//     vector<int> dp(n + 1, -1);

//     for (int i = 0; i <= n; i++)
//     {
//         cout << catalanMemoI(i, dp) << " ";
//     }
//     cout << endl; // 1 1 2 5 14 42 132
// }
// -------------------

// Catan's Number using Tabulation -

// int catalanTabu(int n) // O(n^2)
// {
//     vector<int> dp(n + 1, 0);
//     dp[0] = dp[1] = 1;

//     for (int i = 2; i <= n; i++) // ith catalan
//     {
//         for (int j = 0; j < i; j++) // 0 to i-1
//         {
//             dp[i] += dp[j] * dp[i - j - 1];
//         }
//     }
//     return dp[n];
// }

// int main()
// {
//     int n = 6;

//     for (int i = 0; i <= n; i++)
//     {
//         cout << catalanTabu(i) << " ";
//     }
//     cout << endl; // 1 1 2 5 14 42 132
// }
// ____________ ____________

// 2.5.2) - Leetcodee - 96) Count BST's - FInd coutn of all possible structurally unique BSTs that can be forned with n nodes

/*
- when n. of nodes n = 0, to kisi node ka naa select krna bhi 1 tarika h.
- if there is smallest node as a root then uske left me BST me  kuchh nhi aayga, to kuchh nhi aana ya koi node nhi hona bhi 1 tarika ha
 */

//  using Tabulatoin -

// class Solution
// {
// public:
//     int numTrees(int n)
//     {
//         vector<int> dp(n + 1, 0);
//         dp[0] = dp[1] = 1;

//         for (int i = 2; i <= n; i++)
//         {
//             for (int j = 0; j < i; j++)
//             {
//                 dp[i] += dp[j] * dp[i - j - 1];
//             }
//         }
//         return dp[n];
//     }
// };

// int main()
// {
//     Solution sol;
//     int n = 5;

//     cout << "Number of unique BSTs for n = " << n << " is: " << sol.numTrees(n) << endl;

//     // Extra test cases
//     for (int i = 1; i <= 10; i++)
//     {
//         cout << "n = " << i << " -> " << sol.numTrees(i) << endl;
//     }

//     /*
// Number of unique BSTs for n = 5 is: 42
// n = 1 -> 1
// n = 2 -> 2
// n = 3 -> 5
// n = 4 -> 14
// n = 5 -> 42
// n = 6 -> 132
// n = 7 -> 429
// n = 8 -> 1430
// n = 9 -> 4862
// n = 10 -> 16796
// */
// }
// ____________ ____________

// 2.5.3) - Mountain Ranges Problem -

// int mountainRanges(int n)
// {
//     vector<int> dp(n + 1, 0);
//     dp[0] = dp[1] = 1;

//     for (int i = 2; i <= n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             dp[i] += dp[j] * dp[i - j - 1];
//         }
//     }
//     return dp[n];
// }

// int main()
// {
//     int pairs = 3;

//     cout << mountainRanges(pairs) << endl; // 5
// }
// ____________ ____________ ____________ ____________ ____________

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

// using Memoization -
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

// using Tabulation -

// We remeber - Jo recurison ka Base Case hota he vai tabuation me ander initialize ki condition hoti he

// int matrixChainMultiplicationTabulation(vector<int> arr) // O(n^3)
// {
//   int n = arr.size();
//   vector<vector<int>> dp(n, vector<int>(n, 0));

//   // dp[i][i] = 0 (only one matrix, no multiplication)
//   for (int i = 1; i < n; i++)
//   {
//     dp[i][i] = 0;
//   }

//   // bottom up fill
//   for (int len = 2; len < n; len++) // length of chain
//   {
//     for (int i = 1; i <= n - len; i++)
//     {
//       int j = i + len - 1;
//       dp[i][j] = INT_MAX;

//       for (int k = i; k < j; k++)
//       {
//         int cost1 = dp[i][k];
//         int cost2 = dp[k + 1][j];
//         int currCost = cost1 + cost2 + (arr[i - 1] * arr[k] * arr[j]);
//         dp[i][j] = min(dp[i][j], currCost);
//       }
//     }
//   }

//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       cout << dp[i][j] << " ";
//     }
//     cout << endl;
//   }

//   return dp[1][n - 1];
// }

// int main()
// {
//   vector<int> arr = {1, 2, 3, 4, 3}; // n-> n-1 matrices (1 to n-1)

//   cout << matrixChainMultiplicationTabulation(arr) << endl;
//   /*
//   0 0 0 0 0
//   0 0 6 18 30
//   0 0 0 24 48
//   0 0 0 0 36
//   0 0 0 0 0

//   30
//   */
// }
// ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________
