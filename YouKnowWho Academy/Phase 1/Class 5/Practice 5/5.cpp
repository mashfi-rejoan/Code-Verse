#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()

// bool cmp(pair<int, int> a, pair<int, int> b)
// {
// 	auto [x1, y1] = a;
// 	auto [x2, y2] = b;
// 	if(x1 != x2) 
// 	{
// 		if(x1 > x2) return false;
// 		return true;
// 	}
// 	else if(x1 == x2)
// 	{
// 		if(y1 < y2) return false;
// 		return true;
// 	}

// }

bool cmp(pair<int, int> a, pair<int, int> b)
{
	auto [x1, y1] = a;
	auto [x2, y2] = b;
	if(x1 != x2) 
	{
		return x1 < x2;
	}
	else
	{
		return y1 > y2;
	}

}

void solve()
{
    int n; cin >> n;
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++)
    {
    	int x, y; cin >> x >> y;
    	v.push_back(make_pair(x, y));
    }

    sort(all(v), cmp);
    for(auto [x, y] : v)
    {
    	cout << x << ' ' << y << nl;
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