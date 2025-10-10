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
  int r, c; cin >> r >> c;
  // trace(r); trace(c);
  int ans;
  if (r <= c) {
    if (c % 2 != 0) {
      ans = (1LL * c * c) - (r - 1);
      cout << ans << nl;
    }
    else {
      ans = (1LL * c * c) - ((c * 2) - 1) + r;
      cout << ans << nl;
    }
  }
  else {
    if (r % 2 == 0) {
      // trace(r);
      // cout << "kjasd\n";
      ans = (1LL * r * r) - (c - 1);
      cout << ans << nl;
    }
    else {
      ans = (1LL * r * r) - ((r * 2) - 1) + c;
      cout << ans << nl;
    }
  }

}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}