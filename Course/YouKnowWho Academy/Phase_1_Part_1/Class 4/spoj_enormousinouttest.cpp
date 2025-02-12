#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
    	int x, y; cin >> x >> y;
    	ll ans = 1LL * x * y;
    	cout << ans << nl;
    } 

    return 0;
}