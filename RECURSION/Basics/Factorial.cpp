#include<bits/stdc++.h>
using namespace std;

long long int factorial(long long int n)
{
    // base condition
    if(n==0)return 1;
    return n*factorial(n-1);
}

int main()
{
    long long n;
    cin >> n; 
    
    // time_t start,end;
    // time(&start);
    cout << factorial(n) << "\n";
    // time(&end);
    // double time_taken = double(end-start);
    // cout << fixed << setprecision(10) << time_taken << "\n";
}