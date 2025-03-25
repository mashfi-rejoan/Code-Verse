#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

ll get_power(ll x, ll n)
{
    ll power = 1;
    for(int i=1; i<=n; i++)
    {
        power *= x;
    }
    return power;
}

int main()
{
    int x, n; cin>>x>>n;
    ll sum = 0;
    for(int i = 0; i<=n; i+=2)
    {
        sum += get_power(x, i);
    }
    sum--;
    cout<<sum<<nl;
    return 0;
}