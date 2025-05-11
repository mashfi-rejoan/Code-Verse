/*  
   In the name of Allah, the Most Gracious, the Most Merciful.  

   Author : Mashfi Rejoan Saikat   
*/


#include<bits/stdc++.h>

#define int long long int
#define nl '\n'
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '

using namespace std;



void solve()
{
    int n; cin >> n;
    set<int> se;
    int sz = n;
    while(n--) {
    	string s; cin >> s;
    	int cnt = 0;
    	for(int i = 0; i < sz; i++) {
    		if(s[i] == '1') cnt++;
    	}
    	if(cnt != 0) se.insert(cnt);
    	// cout << s << nl;
    }
    // for(auto it = se.begin(); it != se.end(); it++) cout << *it << ' ';
    if((int)se.size() == 1) cout << "SQUARE\n";
    else cout << "TRIANGLE\n";
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