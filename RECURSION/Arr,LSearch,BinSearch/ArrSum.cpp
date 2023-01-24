#include<bits/stdc++.h>
#include<chrono>
using namespace std;

int sum(int *arr,int size)
{
    if(size == 0 )return 0;
    int ans = sum( arr,size-1) + arr[size-1];
    return ans;
}

int sum2(int *arr, int size)
{
    if(size == 1)return arr[0];
    
    int remainingpart = sum2(arr+1,size-1);
    int res = arr[0] + remainingpart ;
    return res;
}
int main()

{
    int arr[5] = { 2 , 4 , 6 , 8 , 9};
    int size = 5;

    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    
    cout << "Sum is " << sum(arr,size) << "\n";

    cout << "Sum is " << sum2(arr,size) << "\n";

    auto end = chrono::high_resolution_clock::now();
  
    double time_taken = 
      chrono::duration_cast<chrono::nanoseconds>(end - start).count();
  
    time_taken *= 1e-9;
  
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(9) << " sec" << endl;
}