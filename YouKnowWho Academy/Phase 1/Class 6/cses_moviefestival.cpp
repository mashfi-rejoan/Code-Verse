/*  
   In the name of Allah, the Most Gracious, the Most Merciful.  

   Author : Mashfi Rejoan Saikat   
*/


#include<bits/stdc++.h>

#define ll long long
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '

using namespace std;

bool cmp(pair<int, int> x, pair<int, int> y)
{
	return x.S < y.S;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++)
    {
    	int x, y; cin >> x >> y;
    	v.push_back(make_pair(x, y));
    }
    sort(all(v), cmp);
    int last_ending = -1;
    int ans = 0;
    for(auto [x, y] : v)
    {
    	// cout << x << ' ' << y << nl;
    	if(last_ending <= x)
    	{
    		ans++;
    		last_ending = y;
    	}
    }
    cout << ans << nl;

    return 0;
}