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



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    multiset<int> tower_tops;
    for(int i = 0; i < n; i++)
    {
    	int x; cin >> x;
    	auto it = tower_tops.upper_bound(x);
    	if(it != tower_tops.end())
    	{
    		tower_tops.erase(it);
    		tower_tops.insert(x);
    	}
    	else
    	{
    		tower_tops.insert(x);
    	}
    } 
    cout << tower_tops.size() << nl;

    return 0;
}