#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;


int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        ll x = (1LL * n*(n+1))/2;
        x = 1LL * x*x;
        ll y = (1LL *n*(n+1)*(2*n+1))/6;
        ll ans = abs(x-y);
        cout<<ans<<nl;

    }
    return 0;
}