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

int n, x, y;
bool f(int time)
{
   int copy = 0;
	int mn = min(x, y);
   time -= mn;
   if(time > 0) copy++;

   copy += ((time / x) + (time / y));

   return copy >= n;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> x >> y;
    if(n == 1) 
    {
      cout << min(x, y) << nl;
      return 0;
    }
     
    int l = 0, r = 2e9, ans = -1;
    while(l <= r)
    {
    	int mid = l + (r - l) / 2;
    	// cout << "MID : " << mid << nl;
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
    return 0;
}