#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    // vector<tuple<int, int, int, int, int>> vec;

    // for(int i = 0; i < n; i++)
    // {
    // 	int z, y, u, x, v; cin >> z >> y >> u >> x >> v;
    // 	vec.pb(make_tuple(z, y, u, x, v));
    // }
    // sort(all(vec));
    // for(auto [x, y, z, u, v] : vec)
    // {
    // 	cout << x << ' ' <<  y << ' ' << z << ' ' << u << ' ' << v << nl;
    // }


    vector<vector<int>> vec;
    for(int i = 0; i < n; i++)
    {
    	int x, y, z, u, v; cin >> x >> y >> z >> u >> v;
    	vec.pb({x, y, z, u, v});
    }
    sort(all(vec));
    for(auto v : vec)
    {
    	cout << v[0] << ' ' << v[1] << ' ' << v[2] << ' ' << v[3] << ' ' << v[4] << nl;
    }
    return 0;
}