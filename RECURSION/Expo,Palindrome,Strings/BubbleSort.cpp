#include <bits/stdc++.h>
#include <chrono>
using namespace std;

void BubbleSort(int *arr, int n)
{
    if (n == 0 || n == 1)
        return;

    // in ith round --> ith largest number reaches at its correct position
    // Solving only 1 step
    // for sending the biggest element at the last place

    ///   1  CASE   SOLVE   KARLO , BAAKI APNE AAP HO JAAYEGAAA 
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    // check for remaining ( n - 1 ) terms ...
    BubbleSort(arr, n - 1);
}

int main()
{
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int n = 10;
    auto start = chrono::high_resolution_clock::now();
    BubbleSort(arr, n);
    auto stop = chrono :: high_resolution_clock::now();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    double time  = chrono::duration_cast<chrono::nanoseconds>(stop-start).count();
    time *= 1e-9;
    cout << fixed << setprecision(9) << "The Time Taken by the Full Program is " << time << " seconds\n";
}