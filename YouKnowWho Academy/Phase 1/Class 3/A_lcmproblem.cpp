#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int l, r; cin>>l>>r;
		if((2*l) <= r) cout<<l<<" "<<2*l<<nl;
		else cout<<-1<<" "<<-1<<nl;
		
	}
	return 0;
}