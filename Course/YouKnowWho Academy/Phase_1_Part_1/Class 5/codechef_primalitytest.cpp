#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

bool is_prime(int n)
{
	if(n < 2) return false;
	if(n == 2 or n == 3) return true;
	if(n % 2 == 0) return false;

	for(int i = 3; i * i <= n; i += 2)
	{
		if(n % i == 0) return false;
	}

	return true;
}

void solve()
{
    int n; cin >> n;
    if(is_prime(n)) cout << "yes\n";
    else cout << "no\n";
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