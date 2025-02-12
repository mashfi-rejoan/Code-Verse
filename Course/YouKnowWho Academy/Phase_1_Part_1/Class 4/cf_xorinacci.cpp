#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
	int a, b, n; cin >> a >> b >> n;
	int ans;
    if(n % 3 == 0) ans = a;
    else if (n % 3 == 1) ans = b;
    else ans = a ^ b;
    cout << ans << nl;
}

int main()
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