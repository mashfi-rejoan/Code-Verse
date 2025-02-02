#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int n, weight_capacity; vector<int>w; vector<int>v;
int max_value;

void solve(int item, int weight, int value)
{
	if(item>=n)
	{
		if(weight<=weight_capacity)
		{
			max_value = max(max_value, value);
		}
		return;
	}

	// don't take
	solve(item+1, weight, value);

	// take
	solve(item+1, weight + w[item], value + v[item]);
}

int main()
{
	cin>>n>>weight_capacity;
	for(int i=0; i<n; i++)
	{
		int x, y; cin>>x>>y;
		w.push_back(x);
		v.push_back(y);
	}

	solve(0, 0, 0);
	cout<<max_value<<nl;
	return 0;
}