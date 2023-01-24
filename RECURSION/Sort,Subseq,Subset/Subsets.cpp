
#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    // base case
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }
    // exclude
    solve(nums, output, index + 1, ans);

    // include
    int ele = nums[index];
    output.push_back(ele);
    solve(nums, output, index + 1, ans);
}

vector<vector<int>> subsets(vector<int> &input)
{
    vector<vector<int>> ans;
    vector<int> output;
    int index;
    solve(input, output, 0, ans);
    return ans;
}

int main()
{
    // int a;
    // while(cin >> a)
    // {
    //     input.push_back(a);
    // }
    int n;
    cin >> n;
    vector<int> input;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        input.push_back(a);
    } 

    vector<vector<int>> res = subsets(input);

    for (int i = 0; i < res.size(); i++)
    {
        cout << i+1 << "th subset " ;
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }
}