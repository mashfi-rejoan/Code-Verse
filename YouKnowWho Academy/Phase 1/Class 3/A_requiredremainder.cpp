#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		ll x, y, n; cin>>x>>y>>n;
		ll p = (n-y)/x;
		ll k = p*x+y;
		cout<<k<<nl;
	}
	return 0;
}