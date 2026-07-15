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
    s += "1";
    int ini = -1, inj = -1;
    for(int i = 0; i < n; i++) 
    {
    	if(s[i] == '1') 
    	{
    		ini = i;
    		break;
    	}
    }
    for(int i = ini + 1; i < n; i++) 
    {
    	if(s[i] == '0' and s[i + 1] == '1') 
    	{
    		inj = i;
    		break;
    	}
    }
    string tempx = "", tempr = "";
    if(ini != -1 and inj != -1)
    {
    	for(int i = 0; i < ini; i++)
	    {
	    	tempx += s[i];
	    }
	    for(int i = ini; i <= inj; i++)
	    {
	    	tempr += s[i];
	    }
	    reverse(all(tempr));
	    tempx += tempr;
	    for(int i = inj + 1; i < n; i++)
	    {
	    	tempx += s[i];
	    }
	    int ans = 0;
	    string p = "0"; p += tempx;
	    for(int i = 0; i < n; i++)
	    {
	    	if(p[i] != p[i + 1]) ans += 2;
	    	else ans++;
	    }
	    cout << ans << nl;
	    // cout << "IF\n";
    }
    else
    {
    	int ans = 0;
	    string p = "0"; p += s;
	    for(int i = 0; i < n; i++)
	    {
	    	if(p[i] != p[i + 1]) ans += 2;
	    	else ans++;
	    }
	    cout << ans << nl;
	    // cout << "ELSE\n";
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