/*  
   In the name of Allah, the Most Gracious, the Most Merciful.  
*/


#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '



int32_t main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int n, q; cin >> n >> q;
   vector<int> v(n + 2), d(n + 2), ans(n + 2);
   for(int i = 1; i <= n; i++) {
      cin >> v[i];
   }
   for(int i = 1; i <= n; i++) {
      d[i] = v[i] - v[i - 1];
   } 
   while(q--) {
      int l, r, x; cin >> l >> r >> x;
      d[l] += x;
      d[r + 1] -= x;
   }
   for(int i = 1; i <= n; i++) {
      ans[i] = ans[i -1] + d[i];
   }
   for(int i = 1; i <= n; i++) {
      cout << ans[i] << ' ';
   }
   cout << nl;

   return 0;
}