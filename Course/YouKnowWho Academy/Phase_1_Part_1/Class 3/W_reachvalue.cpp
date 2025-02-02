#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

bool solve(ll n)
{
	if(n==1)
	{
		return true;
	}

	if(n%10==0 and solve(n/10))
	{
		return true;
	}
	if(n%20==0 and solve(n/20))
	{
		return true;
	}

	else return false;

	
	
}

int main()
{
	int t; cin>>t;
	while(t--)
	{
		ll n; cin>>n;
		if(solve(n)) cout<<"YES\n";
		else cout<<"NO\n";
	}

}