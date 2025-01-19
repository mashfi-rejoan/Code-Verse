#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

ll cnt;
void solve(ll n)
{
    if(n<2)
    {
        return;
    }
    else
    {
        solve(n/2);
        cnt++;
    }
}

int main()
{
    ll n; cin>>n;
    solve(n);
    cout<<cnt<<nl;
    return 0;
}