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
    int cnt = 0;
    int iterate = 1e4;
    while(iterate--)
    {
    	if(n == 1) 
    	{
    		cout << cnt << nl;
    		return;
    	}
    	cnt++;
    	if(n % 6 == 0)
    	{
    		n /= 6;
    	}
    	else
    	{
    		n *= 2;
    	}
    }
    cout << -1 << nl;
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