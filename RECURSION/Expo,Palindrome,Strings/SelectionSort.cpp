#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int *a, int n)
{
    int min_ind;
    for (int i = 0; i < n; i++)
    {
        min_ind = i;
        for (int j = i+1; j < n; j++)
        {
            if( a[j] < a[min_ind])
            {
                min_ind = j;
            }
        }
        if(min_ind != i)
        {
            swap( a[min_ind] , a[i]);
        }
    }
    
}

int main()
{
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int n = 10;
    auto start = chrono::high_resolution_clock::now();
    InsertionSort(arr, n);
    auto stop = chrono ::high_resolution_clock::now();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    double time = chrono::duration_cast<chrono::nanoseconds>(stop - start).count();
    time *= 1e-9;
    cout << fixed << setprecision(9) << "The Time Taken by the Full Program is " << time << " seconds\n";
}