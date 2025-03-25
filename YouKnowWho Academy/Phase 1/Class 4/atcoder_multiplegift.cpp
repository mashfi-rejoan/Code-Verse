#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll x, y; cin >> x >> y;
    int ans = 0;
    while(x <= y)
    {
    	ans++;
    	x *= 2;
    }
    cout << ans << nl;
    return 0;
}