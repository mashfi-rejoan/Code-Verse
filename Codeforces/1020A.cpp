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
    string s; cin >> s;
    // cout << s << nl;
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
    	string x = s;
    	if(x[i] == '1') x[i] = '0';
    	else x[i] = '1';
    	// cout << x << nl;
    	for(int j = 0; j < n; j++)
    	{
    		if(x[j] == '1') cnt++;
    	}
    }
    cout << cnt << nl;
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