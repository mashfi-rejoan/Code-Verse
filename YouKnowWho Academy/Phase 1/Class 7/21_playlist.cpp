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

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  vector<int> v(n);
  for (auto &u : v) cin >> u;

  set<int> st;

  int r = 0, ans = 0;
  for (int l = 0; l < n; l++) {
    while (r < n and st.find(v[r]) == st.end()) {
      st.insert(v[r]);
      r++;
    }
    st.erase(v[l]);
    ans = max(ans, (r - l));
    // cout << l << ' ' << r << nl;
  }
  cout << ans << nl;

  return 0;
}