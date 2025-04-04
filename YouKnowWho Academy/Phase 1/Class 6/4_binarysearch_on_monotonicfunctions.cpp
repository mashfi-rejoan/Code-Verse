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


vector<int> v;
int n, s;
bool f(int x)
{
	ll sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum += (v[i] / x);
	}
	return sum >= s;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> s;
    v.resize(n);
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    } 

    int ans = -1;
    int l = 1, r = 1e9;
	while(l <= r)
	{
		int mid = (l + r) / 2;
		if(f(mid))
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
    return 0;
}