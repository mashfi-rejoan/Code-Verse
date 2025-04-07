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



void solve()
{
    int n, k; cin >> n >> k;
    if(k % 2 ==  0)
    {
    	for(int i = 1; i <= n; i++)
    	{
    		if(i != (n - 1))
    		{
    			cout << (n - 1) << ' ';
    		}
    		else
    		{
    			cout << n << ' ';
    		}
    	}
    }
    else
    {
    	for(int i = 1; i <= n; i++)
    	{
    		if(i != n)
    		{
    			cout << n << ' ';
    		}
    		else
    		{
    			cout << (n - 1) << ' ';
    		}
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