#include<bits/stdc++.h>
using namespace std;

void solve(vector<string>&ans,string input,string output,int i)
{
    // base case
    if( i >= output.length())
    {
        ans.push_back(output);
        return;
    }

    // exclude
    solve(ans,input,output,i+1);

    //include
    output.push_back(input[i]);
    solve(ans,input,output,i+1);

}

vector<string>subsequences(string input)
{
    vector<string>ans;
    string output = "";
    solve(ans,input,output,0);
    return ans ;
}

int main()
{
    string s;
    cin >> s;
    vector<string> res = subsequences(s);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << "\n";
    }
    

}