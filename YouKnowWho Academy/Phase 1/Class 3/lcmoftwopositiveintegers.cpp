#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int main()
{
    ll x, y; cin>>x>>y;
    ll gcd = __gcd(x,y);
    ll lcm = (1LL * x * y) / gcd;
    cout<<lcm<<nl;
    return 0;
}