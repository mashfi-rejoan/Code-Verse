#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int n, x; vector<int>v;
bool flag = false;

void solve(int i, int sum)
{
	if(i>=n)
	{
		if(sum==x)
		{
			flag = true;
		}
		return;
	}
	solve(i+1, sum+v[i]);

	solve(i+1, sum-v[i]);
}

int main()
{
	cin>>n>>x;
	v.resize(n);
	for(int i=0; i<n; i++)
	{
		cin>>v[i];
	}

	solve(1, v[0]);

	if(flag) cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}