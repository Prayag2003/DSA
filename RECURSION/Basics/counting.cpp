#include<bits/stdc++.h>
using namespace std;

void count(int n)
{
    // base condition 
    // if(n==1)   // not in the spirit of recursion
    // {
    //     cout << 1;
    //     return;
    // }

    // base condition
    if(n==0)return ;

    // processing
    cout << n << " ";

    // recursive condition
    count(n-1);
}

int main()
{
    int n;cin >> n;
    count(n);
}