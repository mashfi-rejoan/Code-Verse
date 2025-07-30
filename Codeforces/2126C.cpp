/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long int
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n"; 



void solve() 
{
  int n, k; cin >> n >> k;
  vector<int> v(n);
  for (auto &u : v) cin >> u;

  k--;
  int currAt = v[k];
// trace(currAt);
  sort(all(v));
  // print(v); cout << nl;
  int mxTower = *v.rbegin();
  // cout << mxTower << nl;
  int wl = 1;
  while (currAt != mxTower) {
    if (upper_bound(all(v), currAt) != v.end()) {
      int ub = *upper_bound(all(v), currAt);
      // trace(ub);
      // trace(currAt);
      
      int stay = ub - currAt;
      // trace(stay);
      wl += stay;
      // trace(wl);
      if (wl - 1 > currAt) {
        cout << "NO\n";
        return;
      }
      currAt = ub;
    }
  }

  cout << "YES\n";
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}