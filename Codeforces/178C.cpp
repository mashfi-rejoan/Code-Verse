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
    int acnt = 0, bcnt = 0;
    if(s[0] == 'A' and s[n - 1] == 'B') acnt++;
    	else if(s[0] == 'B' and s[n - 1] == 'A') bcnt++;
    vector<int> a, b;
    for(int i = 0; i < n; i++)
    {
    	if(s[i] == 'A') a.push_back(i);
    	else b.push_back(i);
    }
    sort(allr(a));
    sort(allr(b));
    for(int i = 0; i < n; i++)
    {
    	if(a[i] > b[i]) 
    	{
    		
    		acnt++;
    	}
    	else if (b[i] > a[i]) 
    	{
    		
    		bcnt++;
    	}
    }

    if(acnt > bcnt) cout << "Alice\n";
    else cout << "Bob\n";
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