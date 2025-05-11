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
    string p, r; cin >> p >> r;
    int j = 0;
    // for(int i = 0; i < (int)p.size(); i++) {
    // 	if(j < r.size()) {
    // 		if(p[i] == r[j] and p[i] == p[j + 1]) {
    // 			cnt += 2;
    // 		}
    // 		else if(p[i] == r[j]) {
    // 			cnt++;
    // 		}
    // 	}
    // }

    int i = 0, j = 0;
    while(i < (int)p.size() and j < (int)r.size()) {
    	int cnt = 0;
    	if(p[i] == r[j] and p[i] == r[j + 1]) {
    		i++;
    		j += 2;
    		cnt += 2;
    	}
    	else if(p[i] == r[j]) {
    		i++;
    		j++;
    		cnt++;
    	}
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