#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;


int main()
{
    int n; cin>>n;
    vector<ll>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    ll sum = 0;
    ll res = LLONG_MIN;
    for(int i=0; i<n; i++)
    {
        sum = max(v[i], sum+v[i]);
        res = max(res, sum);
    }
    cout<<res<<nl;
    return 0;
}