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

int n;

int missing(vector<int> v)
{
    int xorrie = 0;
    for(int i = 0; i < (int)v.size(); i++)
    {
    	xorrie ^= v[i];
    } 
    int xorr = 0;
    for(int i = 1; i <= n + n; i++)
    {
    	xorr ^= i;
    }
    return (xorr ^ xorrie);
}

void solve()
{
	cin >> n;
	int a[n][n];
	vector<int> v(2 * n);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> a[i][j];
			v[i + j] = a[i][j];
		}
	} 
	v.resize(n + n - 1);
	cout << missing(v) << ' ';
	print(v);
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