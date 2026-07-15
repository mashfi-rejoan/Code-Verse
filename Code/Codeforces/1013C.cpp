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

void print(vector<int> v)
{
	for(auto u : v)
	{
		cout << u << ' ';
	}
	cout << nl;
}

void solve()
{
    int n; cin >> n;
    if(n % 2 == 0) cout << -1 << nl;
    else
    {
        for(int i = n; i >= 1; i--)
        {
            cout << i << ' ';
        }
        cout << nl;
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