#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		ll n; cin>>n;
		if(n&n-1) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}