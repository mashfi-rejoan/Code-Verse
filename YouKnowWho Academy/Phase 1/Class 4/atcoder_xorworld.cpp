#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

ll zero_to_x_xor(ll x)
{
	ll ans = 0;
	while(x >= 0 and x % 4 != 3)
	{
		ans ^= x;
		x--;
	}
	return ans;
}

ll l_to_r_xor(ll l, ll r)
{
	ll ans = 0;
	ans = zero_to_x_xor(r) ^ (l > 0 ? zero_to_x_xor(l-1) : 0);
	return ans;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll l, r; cin >> l >> r;
    ll ans = l_to_r_xor(l, r);
    cout << ans << nl;

    return 0;
}