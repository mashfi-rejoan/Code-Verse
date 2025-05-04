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
    int n, m; cin >> n >> m;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    }
    int b; cin >> b;

    if(n == 1)
    {
    	cout << "YES\n";
    	return;
    }
    

    for(int i = 0; i < n - 1; i++)
    {
    	if(v[i] > v[i + 1])
    	{
    		int p = b - v[i];
    		if(i == 0 or (p >= v[i - 1] and p <= v[i + 1]))
    		{
    			v[i] = p;
    		}
    	}
    }

    if(is_sorted(all(v))) cout << "YES\n";
    else cout << "NO\n";
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