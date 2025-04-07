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

int w, h, n; 
bool f(int x)
{
	int a = 1LL * x / w; int b = 1LL * x / h;
	if(b == 0) return false;
	return a >= ((double)n / b);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> w >> h >> n;
    int l = 1, r = 2e14;
    int ans = -1;
    while(l <= r)
    {
    	int mid = 1LL * l + (r - l) / 2;
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