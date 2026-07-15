#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()



void solve()
{
    int n, k; cin >> n >> k;
    ll cnt = 0;
    if(n % 2 != 0)
    {
        n -= k;
        cnt++;
    }
    if(n % 2 == 0)
    {
        int x = n % (k - 1);
        int y = n / (k - 1);
        cnt += y;
        if(x != 0) cnt++;
        cout << cnt << nl;
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