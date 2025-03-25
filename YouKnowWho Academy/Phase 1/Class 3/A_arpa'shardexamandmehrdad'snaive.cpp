#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int main()
{
	ll n; cin>>n;
	if(n==0) cout<<1<<nl;
	else if(n%4==0) cout<<6<<nl;
	else if(n%4==1) cout<<8<<nl;
	else if(n%4==2) cout<<4<<nl;
	else if(n%4==3) cout<<2<<nl;
	return 0;
}