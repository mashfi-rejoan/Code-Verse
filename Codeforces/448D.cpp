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

int n, m, k; 
bool is_ok(int x) {
	int cnt = 0;
	for(int i = 1; i <= n; i++) {
		cnt += min(m, x / i);
	}
	return cnt >= k;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m >> k; 

    int l = 1, r = n * m, ans = 0;
    while(l <= r) {
    	int mid = l + (r - l) / 2;
    	if(is_ok(mid)) {
    		ans = mid;
    		r = mid - 1;
    	} else {
    		l = mid + 1;
    	}
    }
    cout << ans << nl;
    return 0;
}