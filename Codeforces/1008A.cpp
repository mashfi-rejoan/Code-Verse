#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()



void solve()
{
    int n, x; cin >> n >> x;
    // vector<int> v;
    ll sum = 0;
    for(int i = 0; i < n; i++)
    {
    	int p; cin >> p;
    	// v.push_back(p);
    	sum = 1LL * sum + p;
    }

    // cout << sum << nl;
    // ll q = 1LL * sum / n;
    if(sum == (x * n)) cout << "YES\n";
    else cout << "NO\n";
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