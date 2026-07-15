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
    vector<int> v(n);
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    	if(v[i] <= k) cnt++;
    }

    if(n == 3)
    {
    	sort(all(v));
    	if(v[1] <= k)
    	{
    		cout << "YES\n";
    		return;
    	}
    	else
    	{
    		cout << "NO\n";
    		return;
    	}
    	
    }

    if(cnt < 2)
    {
    	cout << "NO\n";
    	return;
    }
    else
    {
    	for(int i = 0; i < n - 2; i++)
    	{
    		if(v[i] <= k and (v[i + 1] <= k or v[i + 2] <= k))
    		{
    			cout << "YES\n";
    			return;
    		}
    	}
    	
    }
    cout << "NO\n";

    
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