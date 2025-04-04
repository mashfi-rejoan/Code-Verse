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

using namespace std;


int n, k;
bool f(int x)
{
	int not_divisible = x - (x / n);
	return not_divisible >= k;
}

void solve()
{
    cin >> n >> k;
    int l = 1, r = 2e9 + 9, ans = 0;
    while(l <= r)
    {
    	int mid = l + (r - l) / 2;
    	if(f(mid))
    	{
    		ans = mid;
    		r = mid - 1;
    	}
    	else 
    	{
    		l = mid + 1;
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