int countWaysMem(int n, vector<int> &dp) // O(n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }

    dp[n] = countWaysMem(n - 1, dp) + countWaysMem(n - 2, dp);
    return dp[n];
}

int countWayTab(int n)
{
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }

    return dp[n];
}
int main()
{
    int n = 4;
    cout << countWayTab(n) << endl; // 7

    /*
    int n = 5;
    cout << countWayTab(n) << endl;//13
     */
}