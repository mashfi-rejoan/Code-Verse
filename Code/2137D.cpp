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
#define trace(x) cout << #x << ": " << x << " \n"
#define print(x) for (auto u : (x)) cout << u << ' '; cout << nl;
#define vecin(name, len) vector<int> name(len); for (auto &_ : name) cin >> _;



void solve() 
{
  int n; cin >> n;
  vector<int> b(n), freq(n + 9), ans(n);
  set<int> st;
  for (int i = 0; i < n; i++) {
    cin >> b[i];
    freq[b[i]]++;
    st.insert(b[i]);
  }
  for (int i = 0; i < n; i++) {
    if (freq[b[i]] % b[i] != 0) {
      cout << -1 << nl;
      return;
    }
  }
  vector<vector<int>> vv(n + 9);
  for (int i = 0; i < n; i++) {
    vv[b[i]].push_back(i);
  }
  int x = 1;
  for (auto &u : st) {
    int times = u;
    for (auto &i : vv[u]) {
      ans[i] = x;
      times--;

      if (times <= 0) {
        times = u;
        x++;
      }
    }
  }
  print(ans)

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