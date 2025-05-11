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
    vector<int> a(n), b(n), sum;
    for(int i = 0; i < n; i++)
    {
    	cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
    	cin >> b[i];
    }
    int cross_count = 0;
    for(int i = 0; i < n; i++)
    {
    	if(b[i] == -1)
    	{
    		cross_count++;
    	}
    }
    if(cross_count == n)
    {
        int mn = *min_element(all(a));
        int mx = *max_element(all(a));
        int ans = mn + k - mx + 1;
        cout << ans << nl;
        return;
    }
    else
    {
        set<int> se;
        for(int i = 0; i < n; i++)
        {
            int sum = 0;
            if(b[i] != -1)
            {
                int sum = a[i] + b[i];
                se.insert(sum);
            }
        }
        if((int)se.size() != 1)
        {
            cout << 0 << nl;
        }
        else
        {
            int idx;
            for(int i = 0; i < n; i++)
            {  
                if(b[i] != -1)
                {
                    idx = i;
                }
            }
            int need = a[idx] + b[idx];
            for(int i = 0; i < n; i++)
            {
                int check = need - a[i];
                if(check < 0 or check > k)
                {
                    cout << 0 << nl;
                    return;
                }
            }
            cout << 1 << nl;
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