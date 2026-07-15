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
    string s; cin >> s;
    sort(all(s));
    vector<int> v;
    for(char c : s)
    {
    	v.push_back(c - '0');
    }
    // print(v);
    for(int i = 9; i >= 0; i--)
    {
    	auto it = lower_bound(all(v), i);
    	cout << *it;
    	if(it != v.end())
    	{
    		v.erase(it);
    	}
    }
    cout << nl;
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