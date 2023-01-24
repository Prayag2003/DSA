#include <bits/stdc++.h>
using namespace std;

// Without Recursion
string revstr_without_recursion(string s)
{
    int i = 0, j = s.length() - 1;
    while (i < j)
    {
        swap(s[i], s[j]);
        i++;
        j--;
    }
    return s;
}

// With Recursion

void revstr_with_recursion(string s, int i, int j)
{
    cout << s << "\n";
    if (i > j)
        return;
    else
    {
        swap(s[i], s[j]);
        i++;
        j--;
        revstr_with_recursion(s, i, j);
    }
}

// With 1 pointer only
void revstr_with_recursion_1ptr(string s, int i)
{
    cout << s << "\n";
    int n = s.length();
    if (i > n - i - 1)
        return;
    else
    {
        swap(s[i], s[n - i - 1]);
        i++;
        revstr_with_recursion_1ptr(s, i);
    }
}

int main()
{
    string s;
    cin >> s;
    int i = 0, j = s.length() - 1;

    cout << "Reversing without Recursion\n";
    cout << revstr_without_recursion(s) << "\n\n";

    cout << "Reversing with Recursion\n";
    cout << s << "\n";
    cout << "The above string doesn't change since we used passed by value which sends a copy of itself in the function , hence the original s remains s \n\n";

    revstr_with_recursion(s, i, j);
    cout << "\n\n";

    cout << "Reversing using 1 pointer only\n";
    revstr_with_recursion_1ptr(s, 0);
}