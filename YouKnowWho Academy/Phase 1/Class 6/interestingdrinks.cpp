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



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    }
    sort(all(v));
    // print(v);
    int q; cin >> q;
    while(q--)
    {
    	int x; cin >> x;
    	if(x < v[0]) cout << 0 << nl;
    	else
    	{
	    	auto it = upper_bound(all(v), x) - v.begin();
	    	cout << it << nl;
	    }
    }
    return 0;
}