#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int main()
{
	
	int t; cin>>t;
	while(t--)
	{
		int a, b; cin>>a>>b;
		int x = abs(a-b);
		int ans = (x/10);
		if(x%10==0) cout<<ans<<nl;
		else cout<<ans+1<<nl;
	}
	return 0;
}