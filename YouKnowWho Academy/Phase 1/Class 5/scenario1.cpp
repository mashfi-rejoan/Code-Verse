/*
	Author: Mashfi Rejoan Saikat
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()

double distance(int x, int y)
{
	return sqrt(x * x + y * y);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//solve using vector of pair
    // int n; cin >> n;
    // vector<pair<double, pair<int, int>>> v;
    // for(int i = 0; i < n; i++)
    // {
    // 	int x, y; cin >> x >> y;
    // 	v.pb(mp(distance(x, y), mp(x, y)));
    // }

    // sort(all(v));

    // for(auto o : v)
    // {
    // 	cout << o.F << ' ' << o.S.F << ' ' << o.S.S << nl;
    // }


//solve using vector of tuple
    int n; cin >> n;
    vector<tuple<double, int, int>> v;
    for(int i = 0; i < n; i++)
    {
    	int x, y; cin >> x >> y;
    	v.pb(make_tuple(distance(x, y), x, y));
    }
    sort(all(v));
    for(auto [dist, x, y] : v)
    {
    	cout << dist << ' ' << x << ' ' << y << nl;
    }
    return 0;
}