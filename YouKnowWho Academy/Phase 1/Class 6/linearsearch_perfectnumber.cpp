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

bool is_ok(int x)
{
	int sum = 0;
	while(x > 0)
	{
		sum += (1LL * x % 10);
		x /= 10;
	}

	return sum == 10;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int up = 2e6;
    vector<int> v;
    for(int i = 2; i <= up; i++)
    {
    	int ans = (i * 9) + 1;
    	if(is_ok(ans))
	    {
	    	// cout << ans << nl;
	    	v.push_back(ans);
	    }
    } 
    sort(all(v));
    cout << v[n - 1] << nl;
    


    
    
    return 0;
}