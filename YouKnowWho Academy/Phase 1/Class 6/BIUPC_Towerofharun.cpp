/*  
   In the name of Allah, the Most Gracious, the Most Merciful.  

   Author : Mashfi Rejoan Saikat   
*/


#include<bits/stdc++.h>

#define int long long int
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '

using namespace std;



void solve()
{
    int n; cin >> n;
    multiset<int> tower;
    for(int i = 0; i < n; i++)
    {
    	int x; cin >> x;
    	auto it = tower.lower_bound(x);
    	if(it != tower.end())
    	{
    		tower.erase(it);
    		tower.insert(x);
    	}
    	else
    	{
    		tower.insert(x);
    	}
    }
    cout << tower.size() << nl;
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