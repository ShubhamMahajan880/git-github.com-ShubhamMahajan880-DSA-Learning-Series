#include <bits/stdc++.h>
using namespace std;

// 2) DP Patterns using QUns -
// 2.6) Pattern - VI : Matric Chain Multiplication(MCM)
// 2.6.1) using  Recursion -

int matrixChainMultiplicationRecursion(vector<int> arr, int i, int j)
{
    if (i == j)
    {
        return 0;
    }

    int ans = INT_MAX;

    for (int k = i; k < j; k++)
    // (i,k)
    {
        int cost1 = matrixChainMultiplicationRecursion(arr, i, k);

        // (k+1,j)
        int cost2 = matrixChainMultiplicationRecursion(arr, k + 1, j);

        // curr partition cost
        int currCost = cost1 + cost2 + (arr[i - 1] * arr[k] * arr[j]);
        ans = min(ans, currCost);
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 3};
    int n = arr.size();
    cout << matrixChainMultiplicationRecursion(arr, 1, n - 1) << endl; // 30
}
// -------------------
// using Memoization -

int matrixChainMultiplicationMemoI(vector<int> arr, int i, int j, vector<vector<int>> &dp)
{
    if (i == j)
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int ans = INT_MAX;
    for (int k = i; k < j; k++)
    // (i,k)
    {
        int cost1 = matrixChainMultiplicationMemoI(arr, i, k, dp);

        // (k+1,j)
        int cost2 = matrixChainMultiplicationMemoI(arr, k + 1, j, dp);

        // curr partition cost
        int currCost = cost1 + cost2 + (arr[i - 1] * arr[k] * arr[j]);

        ans = min(ans, currCost);
    }
    return dp[i][j] = ans;
    passijg a rgumenets inside construcotr is really a good thing
     and provides us helo in
      directly object creation
}

int main()
{
    vector<vector<int>> dp(n, vector<int>(n, -1));
    vector<int> arr = {1, 2, 3, 4, 3};
    vector<int> arr = {1, 2, 3, 4, 3};
    int n = arr.size();
    cout << matrixChainMultiplicationMemoI(arr, 1, n - 1, dp) << endl; // 30
}
// -------------------
// using Tabulation -

int matrixChainMultiplicationTabulation(vector<int> arr) // O(n^3)
{
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));

    // dp[i][i] = 0 (only one matrix, no multiplication)
    for (int i = 1; i < n; i++)
    {
        dp[i][i] = 0;
    }
    // bottom up fill
    for (int len = 2; len < n; len++) // length of chain
    {
        for (int i = 1; i <= n - len; i++)
        {
            int j = i + len - 1;
            dp[i][j] = INT_MAX;

            for (int k = i; k < j; k++)
            {
                int cost1 = dp[i][k];
                int cost2 = dp[k + 1][j];
                int currCost = cost1 + cost2 + (arr[i - 1] * arr[k] * arr[j]);
                dp[i][j] = min(dp[i][j], currCost);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    return dp[1][n - 1];
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 3}; // n-> n-1 matrices (1 to n-1)

    cout << matrixChainMultiplicationTabulation(arr) << endl;
    /*
    0 0 0 0 0
    0 0 6 18 30
    0 0 0 24 48
    0 0 0 0 36
    0 0 0 0 0

    30
    */

    cout << "Doing cpp - 1times" << endl;
    cout << "Doing cpp - 2times" << endl;
    cout << "Doing cpp - 3times" << endl;
    cout << "Doing cpp - 4times" << endl;
    cout << "Doing cpp - 5times" << endl;
}
// ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________
