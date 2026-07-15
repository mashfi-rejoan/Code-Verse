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
    int n, k; cin >> n >> k;
    if(k == n) {
    	for(int i = 1; i <= n; i++) {
    		cout << 1 << ' ';
    	}
    } 
    else if(k == 1) {
    	for(int i = 1; i <= n; i++) {
    		cout << i << ' ';
    	}
    }
    else {
    	cout << -1 << nl;
    }
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