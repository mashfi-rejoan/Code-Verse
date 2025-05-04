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
    string p, s; cin >> p >> s;

    for(int i = 0; i < (int)s.size(); i++)
    {
    	if(p[i] == s[i] or (p[i - 1] == s[i]))
    	{
    		continue;
    	}
    	else
    	{
    		cout << "NO\n";
    		return;
    	}
    }

    cout << "YES\n";
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