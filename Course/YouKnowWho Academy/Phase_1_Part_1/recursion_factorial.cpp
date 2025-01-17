#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

ll fact(int n)
{
    if(n==1) return 1;
    else if(n==0) return 0;
    else 
    {
        return fact(n-1) * n;
    }
}

int main()
{
    ll n; cin>>n;
    ll ans = fact(n);
    cout<<ans<<nl;
    return 0;
}