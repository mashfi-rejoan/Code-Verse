/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define i128 __int128
#define int long long
#define sz(x) ((int)(x).size())
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define CEIL(a, b) (((a) + (b) - 1) / (b))
#define print(x) for (auto u : (x)) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n" 



void solve() 
{
  int n, q, h; cin >> n >> q >> h;
  vector<int> v(n + 1);
  for (int i = 1; i <= n; i++) cin >> v[i];
  vector<pair<int, int>> vp;
  while (q--) {
    int idx, val; cin >> idx >> val;
    vp.push_back({idx, val});
  }
  stack<pair<int, int>> st;
  for (int i = 0; i < sz(vp); i++) {
    int idx = vp[i].first;
    int val = vp[i].second;
    if (v[idx] + val <= h) {
      st.push({idx, val});
      v[idx] += val;
    }
    else {
      while (!st.empty()) {
        auto it = st.top();
        idx = it.first;
        val = it.second;
        v[idx] -= val;
        st.pop();
      }
    }
  }
  for (int i = 1; i <= n; i++) cout << v[i] << ' ';
    cout << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1;
  cin >> t;
  while(t--) solve();

  return 0;
}