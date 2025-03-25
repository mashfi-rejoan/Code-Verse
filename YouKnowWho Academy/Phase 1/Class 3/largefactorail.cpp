#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

const ll m = 1e9 + 7;

int factorial(int n)
{
    int factorial = 1;
    for(int i=1; i<=n; i++)
    {
        factorial = ((factorial % m) * (i % m)) % m;
    }
    return factorial;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int ans = factorial(n);
        cout<<ans<<nl;
    }
    return 0;
}