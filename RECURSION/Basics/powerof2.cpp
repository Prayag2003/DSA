#include<bits/stdc++.h>
using namespace std;

int power(int n)
{
    // base case (2^0 = 1)
    if(n==0)return 1;

    // return (2*power(n-1));
    int subproblem = power(n-1);
    int biggerproblem = 2*subproblem ;
    return biggerproblem;
}

int main()
{
    int n;
    cin >> n;
    cout<< power(n);
}