#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    int n, k, p; cin >> n >> k >> p;
    k = abs(k);
    int x = ceil((double)k / p);
    x = abs(x);
    if(x <= n) 
    {
    	cout << x << nl;
    }
    else 
    {
    	cout << -1 << nl; 
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}