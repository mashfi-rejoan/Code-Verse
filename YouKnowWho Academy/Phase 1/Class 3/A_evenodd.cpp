#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int main()
{ 
	ll k, n; cin >> k >> n;
	if(k % 2 == 0)
	{
		if(n <= (k / 2))
		{
			//odd part
			cout << (2 * n - 1) << nl;
		}
		else
		{
			ll m = 2 * (n - (k / 2));
			cout << m << nl;
		}
	}
	else
	{
		if(n <= (k / 2)+1)
		{
			//odd part
			cout << (2 * n - 1) << nl;
		}
		else
		{
			ll m = 2 * (n - ((k / 2)+1));
			cout << m << nl;
		}
	}
	
	return 0;
}