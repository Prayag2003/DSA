#include <bits/stdc++.h>
using namespace std;

void printarr(int *a, int l, int h)
{
    cout << "Size of arr is " << (h - l) + 1 << "\n";

    for (int i = l; i <= h; i++)
    {
        cout << a[i] << " ";
    }
    
    cout << "\n";
}

int bin_search(int *a, int l, int h, int key)
{
    printarr(a, l, h);
    if (l > h)
        return 0;

    int mid = l + (h - l) / 2;
    cout << "Mid is " << a[mid] << "\n";

    if (a[mid] == key)
        return mid;

    if (a[mid] > key)
    {
        return bin_search(a, l, mid - 1, key);
    }

    else
        return bin_search(a, mid + 1, h, key);
}

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;
    int key = 10;
    int ans = bin_search(arr, 0, size - 1, key);
    if (ans)
    {
        cout << "Element Found !!! \n";
    }
    else
        cout << "Element Absent \n";
}