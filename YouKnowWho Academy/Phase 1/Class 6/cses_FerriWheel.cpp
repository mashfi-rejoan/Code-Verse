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
 
const int N = 2e5 + 9;
int n, x;
int a[N];
 
bool is_ok(int nagordola) {
	int weight = 0, cnt = 0;
	int i = 0, j = n - 1;
	while(i <= j) {
		weight = a[i] + a[j];
		if(weight <= x) i++;
		j--;
		cnt++; 
	}
	return nagordola >= cnt;
}
 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    cin >> n >> x;
    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }
    sort(a, a + n);
    int l = 1, r = 2e18, ans = 0;
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
