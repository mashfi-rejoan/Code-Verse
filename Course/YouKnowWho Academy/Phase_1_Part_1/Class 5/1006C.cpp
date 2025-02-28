#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    int n, x; cin >> n >> x;
    if(n == 1) 
    {
    	cout << x << nl;
    	return;
    }
    else if(x == 0)
    {
    	for(int i = 0; i < n; i++)
    	{
    		cout << 0 << ' ';
    	}
    }
    else
    {
    	int m = 0;
    	while((1 << m) - 1 <= x)
    	{
    		m++;
    	}

    	vector<int> v;
    	for(int i = 0; i < m; i++)
    	{
    		v.push_back(i);
    	}
    	v.push_back(x);

    	while(v.size() < n)
    	{
    		v.push_back(0);
    	}

    	int orr = 0;
    	for(int i = 0; i < v.size(); i++)
    	{
    		orr = orr | v[i];
    	}
    	if(orr != x)
    	{
    		int y = orr ^ x;
    		v.back() = y;
    	}

    	for(int u : v) cout << u << ' ';

    	cout << nl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}