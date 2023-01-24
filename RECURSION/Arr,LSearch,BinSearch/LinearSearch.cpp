#include <bits/stdc++.h>
using namespace std;

void printarr(int *arr, int n)
{
    cout << "Size of Array is " << n << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << "\n";
}

int search(int *arr, int n, int key)
{
    printarr(arr, n);
    if (n == 0)
        return -1;
    if (arr[0] == key)
        return 1;
    else
    {
        return search(arr + 1, n - 1, key);
    }
}

int main()
{
    int a[6] = {1, 2, 3, 4, 5, 6};
    int key = 6;
    cout << search(a, 6, key) << "\n";
}