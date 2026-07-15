#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()
using namespace std;

bool check(map<int, int> mp)
{
    // Condition remains the same
    if(mp[0] >= 3 and mp[1] >= 1 and mp[2] >= 2 and mp[3] >= 1 and mp[5] >= 1) return true;
    return false;
}

void solve()
{
    int n; cin >> n;
    vector<int> v(n+1);
    
    for(int i = 1; i <= n; i++)
    {
        cin >> v[i];  
    }
    
    map<int, int> mp;
    for(int i = 1; i <= n; i++)
    {
        mp[v[i]]++;

        if(check(mp)) {
            cout << i << nl;
            return;
        }
    }
    
    cout << 0 << nl;
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