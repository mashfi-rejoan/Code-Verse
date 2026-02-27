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
  int n, k; cin >> n >> k;
  vector<int> v(n);
  set<int> st;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    v[i] = x;
    st.insert(x);
  }
  int unq = sz(st);
  map<int, int> mp;
  for (auto& u : v) mp[u]++;
  vector<pair<int, int>> vp;
  for (auto [val, cnt] : mp) {
    vp.push_back({cnt, val});
  }
  sort(all(vp));
  for (auto [cnt, val] : vp) {
    if (k >= cnt) {
      k -= cnt;
      unq--;
    }
  }
  if (unq <= 0) {
    cout << 1 << nl;
    return;
  }
  cout << unq << nl;
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