#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int s, int e)
{
    // starting element of that array ( PIVOT )
    int pivot = arr[s];

    // counting numbers less than equal to pivot to allocate them to the left of the pivot
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
            cnt++;
    }

    // Finding the PivotIndex and replacing it with that element on it
    int pivotIndex = s + cnt;
    swap(arr[s], arr[pivotIndex]);

    // Create 2 pointers for making partition
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if(i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i] , arr[j]);
        }
    }
    return pivotIndex;
}

void quickSort(int *arr, int s, int e)
{
    // Base Case
    if (s >= e)
    {
        return;
    }
    // finding Partitioning Index
    int ind = partition(arr, s, e);

    // Recursive Call for left side
    quickSort(arr, s, ind - 1);
    quickSort(arr, ind + 1, e);
}

int main()
{
    int arr[8] = {24, 18, 38, 43, 14, 40, 1 ,54};
    int n = 8;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}