#include<bits/stdc++.h>
using namespace std;

// 0--> n th stair ---> Either by 1 or 2 jumps
int NStairs(int n)
{
    if(n<0)return 0;
    if(n==0)return 1;

    int ans = NStairs(n-1) + NStairs(n-2);
    return ans ;
}

int main()
{
    int n;cin >> n;
    cout << NStairs(n);
}