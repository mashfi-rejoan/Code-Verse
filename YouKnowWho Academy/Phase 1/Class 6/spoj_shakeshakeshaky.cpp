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

int n, k; 
vector<int> v;
bool is_ok(int x)
{
	int students = 0;
	for(int i = 0; i < n; i++)
	{
		students += (v[i] / x);
	}
	return students >= k;
}

void solve()
{
    cin >> n >> k;
    v.resize(n);
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    }

    int l = 1, r = 1e11, ans = 0;
    while(l <= r)
    {
    	int mid = l + (r - l) / 2;
    	if(is_ok(mid))
    	{
    		ans = mid;
    		l = mid + 1;
    	}
    	else
    	{
    		r = mid - 1;
    	}
    }

    cout << ans << nl;
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