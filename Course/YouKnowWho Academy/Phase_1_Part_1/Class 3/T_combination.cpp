#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int C(int n, int r)
{
	if(n==r or r==0) return 1;
	else if(n<r or r<0 or n<0) return 0;
	else if(r==1) return n;
	else return C(n-1, r) + C(n-1, r-1);
}

int main()
{
	int n, r; cin>>n>>r;
	cout<<C(n, r)<<nl;
	return 0;
}