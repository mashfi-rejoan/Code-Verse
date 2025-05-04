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
    int n, k; cin >> n >> k;
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++)
    {
    	cin >> v[i];
    }
    int min_len = INT_MAX;
    for(int r = 1; r <= n; r++)
    {
    	for(int l = r; l >= 1; l--)
    	{
    		int max_xorr = 0;
    	}
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