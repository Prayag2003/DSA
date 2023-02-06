// " THOSE WHO FORGET THE PAST ARE CONDEMNED TO REPEAT IT "

//  DP is applied when
//  1) Finding the optimum solution of the bigger problem can be easily solved by solving the optimum solution of the smaller subproblem.
// 2) While facing Overlapping Subproblems.

// Methods :
// 1 ) Top - Down Approach ( Recursion && Memoization (Storing the values of sub problems in Maps / Tables ) )

// 2 ) Bottom - Up Approach ( Tabulation)

// 0 1 1 2 3 5 8 13 21 34
// f( n ) = f( n - 1 ) + f( n - 2 )

#include <iostream>
#include <vector>
using namespace std;

// Recursive
int fib(int n)
{
    if (n == 0 || n == 1)
        return n;

    return fib(n - 1) + fib(n - 2);
}

int Top_Down_fib(int n, vector<int> &dp)
{
    if (n == 0 || n == 1)
        return n;

    // Step- 3 ) If answer is available after base case then we return it
    if (dp[n] != -1)
    {
        return dp[n];
    }

    // Step-2 ) Storing
    dp[n] = Top_Down_fib(n - 1, dp) + Top_Down_fib(n - 2, dp);

    return dp[n];
}

int Bottom_Up_fib(int n, vector<int> &dp)
{
    for (int i = 2; i <= n; i++)
    {
        dp[n] = dp[n - 1] + dp[n - 2];
    }
    return dp[n];
}

int main()
{
    // Making a 1-D Array of ( N + 1 ) size and initialize with -1

    // STEPS

    // 1) CREATE A DP ARRAY OF (N+1)

    // 2) STORE EVERY SUBPROBLEM

    // 3) IF(F(N) != -1) RETURN F(N);

    int n;
    cin >> n;

    // Step - 1
    vector<int> dp(n + 1, -1);

    for (int i = 0; i <= n; i++)
    {
        cout << i << " " << Top_Down_fib(i, dp) << "\n";
    }
    cout << "\n";

    // BOTTOM - UP APPROACH

    // 1) CREATE DP ARRAY

    vector<int> dp2(n + 1);

    // 2) CHECK THE BASE CASE ( HERE IT IS DP[1] = 1 & DP[0] = 0)
    dp2[0] = 0;
    dp2[1] = 1;

    // 3) CONVERT FIB TO DP
    for (int i = 0; i <= n; i++)
    {
        cout << i << " " << Bottom_Up_fib(i, dp2) << "\n";
    }
    cout << "\n";


    //  SPACE OPTIMISATION
    int prev1 = 0;
    int prev2 = 1;
    int curr = 0;

    for (int i = 0; i <= n; i++)
    {
        cout << prev1 << " ";
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
}
