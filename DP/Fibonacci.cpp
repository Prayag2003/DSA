#include <bits/stdc++.h>
using namespace std;

int fib(int n, vector<int> &dp)
{
    if (n <= 1)
        return n;

    // Step - 3
    if (dp[n] != -1)
    {
        return dp[n];
    }

    // Step - 2
    dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    // Step - 1
    // create a DP array of size = n
    vector<int> dp(n + 1);
    for (int i = 0; i < n + 1; i++)
    {
        dp[i] = -1;
    }

    cout << fib(n, dp);
}