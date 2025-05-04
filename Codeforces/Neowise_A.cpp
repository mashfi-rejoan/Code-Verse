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

    // if(n == 2 and s == ">")
    // {
    // 	cout << 1 << ' ' << 2 << nl;
    // 	return;
    // }

    int cnt = 0, x = 0;
    for(int i = 0; i < (int)s.size(); i++)
	{
    	if(s[i] == '>') cnt++;
    }

	x = n - cnt;

    vector<int> v;
    v.push_back(x);
    for(int i = 0; i < (int)s.size(); i++)
    {
    	if(s[i] == '<')
    	{
    		x = *min_element(all(v));
    		x--;
    		v.push_back(x);
    	}
    	else
    	{
    		x = *max_element(all(v));
    		x++;
    		v.push_back(x);
    	}
    }
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