#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int i)
{
    int n = s.length();
    if (i > n - i - 1)
        return true;

    if (s[i] != s[n - i - 1])
        return false;
    else
    {
        i++;
        return isPalindrome(s, i);
    }
}

int main()
{
    string s;
    cin >> s;
    if (isPalindrome(s, 0))
    {
        cout << "Its a Palindrome\n";
    }
    else
    {
        cout << "Its not a Palindrome\n";
    }
}