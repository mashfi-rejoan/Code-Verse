#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int main()
{
	ll n, k; cin>>n;
	k=n/2;
	if(n%2==0)
	{
		cout<<k<<nl;
	}
	else 
	{
		cout<<-(k+1)<<nl;
	}
	return 0;
}