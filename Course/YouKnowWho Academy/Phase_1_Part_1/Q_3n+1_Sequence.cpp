#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

ll cnt;
void solve(int n)
{
    if(n==1)
    {
        cnt++;
        return;
    }
    else if(n%2 != 0)
    {
        cnt++;
        solve(3*n+1);
    }
    else if(n%2 == 0)
    {
        cnt++;
        solve(n/2);
    }
}

int main()
{
    int n;
    cin>>n;
    solve(n);
    cout<<cnt<<nl;
    return 0;
}