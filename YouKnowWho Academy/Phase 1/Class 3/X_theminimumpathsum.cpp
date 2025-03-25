#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int a[100][100];
ll mx_sum = LLONG_MIN;
ll sum;
int n, m;
void solve(int i, int j, ll sum)
{
	if(i==n-1 and j==m-1)
	{
		mx_sum = max(sum, mx_sum);
		return;
	}
	if(i+1<n)
	{
		solve(i+1, j, sum+a[i+1][j]);
	}
	if(j+1<m)
	{
		solve(i, j+1, sum+a[i][j+1]);
	}
}
int main()
{
	cin>>n>>m;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>a[i][j];
		}
	}
	solve(0, 0, a[0][0]);
	cout<<mx_sum<<nl;
	return 0;
}