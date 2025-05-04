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


const int N = 1e6 + 9;
vector<int> vec[10];
int f(int n)
{
	int product = 1;
	while(n > 0)
	{
		int p = n % 10;
		if(p != 0)
		{
			product *= p;
		}
		n /= 10;
	}
	return product;	
}

int g(int n)
{
	if(n < 10)
	{
		return n;
	}
	return g(f(n));
}

void precompute()
{
	for(int i = 1; i <= N; i++)
    {
    	int x = g(i);
    	vec[x].push_back(i);
    }
}

void solve()
{
    int l, r, k; cin >> l >> r >> k;
    auto x = upper_bound(vec[k].begin(), vec[k].end(), r) - lower_bound(vec[k].begin(), vec[k].end(), l);
    // for(auto u : vec[k])
    // {
    // 	if(u >= l and u <= r) x++;
    // }

    cout << x << nl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precompute();
    // print(v);
    // cout << vec[6].size() << nl;

    int t; cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}