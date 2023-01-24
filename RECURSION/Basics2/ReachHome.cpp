#include<bits/stdc++.h>
using namespace std;

void reachHome(int src,int dest)
{
    cout << "Source: " << src << " " << "Destination " << dest << "\n";

    if(src == dest){
        cout << "Pahuch Gaye \n";
        return;
    }

    // Processing
    src++;

    // Call
    reachHome(src,dest);
}

int main()
{
    int src = 1;
    int dest = 10;

    reachHome(src,dest);
}