#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    int n; cin>>n;
    ll sum = 0;
    sum+= (n%10);
    n/=10;
    sum+= (n%10);
    cout<<sum<<nl;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}