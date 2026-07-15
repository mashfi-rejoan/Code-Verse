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
  int n; cin >> n;
  vector<int> v(n + 1);
  set<int> st;
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
    st.insert(v[i]);
  }
  if ((int)st.size() == 1) {
    cout << 0 << nl;
    return;
  }

  int l = 1, r = 1, ans = LLONG_MAX;
  while (l <= n) {
    while (r <= n and v[l] == v[r]) {
      r++;
    }
    int cost = ((l - 1) * v[l]) + ((n - r + 1) * v[l]);
    // cout << cost << nl;
    ans = min(ans, cost);
    // cout << ans << nl;
    // cout << l << ' ' << r << nl;
    l = r;
  }
  cout << ans << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}