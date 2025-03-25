#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    map<int, int> cnt;
    ll ans  = 0;
    for(int i = 0; i < n; i++)
    {
    	int x; cin >> x;
    	ans += 1LL * (i - cnt[x]);
    	cnt[x]++;
    }

    cout << ans << nl;
    return 0;
}