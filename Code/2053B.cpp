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
  vector<int> v(2 * n + 9), cnt(2 * n + 9), pref(2 * n + 9);
  vector<pair<int, int>> vp;
  for (int i = 1; i <= n; i++) {
    int l, r; cin >> l >> r;
    vp.push_back({l, r});
    if (r - l == 0) {
      v[l] = 1;
      cnt[l]++;
    }
  }
  for (int i = 1; i <= 2 * n; i++) {
    pref[i] = pref[i - 1] + v[i];
  }
  // print(v);
  // print(pref);
  int i = 1;
  for (auto& [l, r] : vp) {
    int gap = r - l + 1;
    int filled = pref[r] - pref[l - 1];
    
    if (filled == gap) {
      if (r - l == 0 and cnt[l] == 1) {
        cout << 1;
      }
      else cout << 0;
    }
    else cout << 1;
    i++;
  }
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