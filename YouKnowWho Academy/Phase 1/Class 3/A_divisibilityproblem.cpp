#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int main()
{ 
	int t; cin >>t;
	while(t--)
	{
		ll a, b; cin >> a >> b;
		if(a % b == 0) cout << 0 << nl;
		else if(b > a) cout << (b - a) << nl;
		else cout << ((((a / b) + 1) * b) - a) << nl;
	}
	return 0;
}