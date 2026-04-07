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
  vecin(v, n);
  map<int, int> mp1, mp2, mpAlice; 
  int move = CEIL(n, 2);
  for (auto &u : v) {
    mp1[u]++;
  }
  mp2 = mp1;
  int idx = 1;
  while (!mp2.empty()) {
    // for (auto [key, val] : mp2) {
    //   cout << key << ' ' << val << nl;;
    // }
    // cout << nl;

    auto minIt = std::min_element(mp2.begin(), mp2.end(),
      [](const auto& lhs, const auto& rhs) {
        return lhs.second < rhs.second;
      }
    );

    int minKey = minIt->first;
    int minValue = minIt->second;

    if (idx & 1) {
      mpAlice[minKey]++;
      mp2[minKey]--;
      if (mp2[minKey] <= 0) mp2.erase(minKey);
    }
    else {
      mp2[minKey]--;
      if (mp2[minKey] <= 0) mp2.erase(minKey);
    }
    idx++;
  }
  int ans = sz(mpAlice);
  // trace(ans);
  for (auto [key, val] : mpAlice) {
    // cout << key << ' ' << val << nl;;
    // trace(mp1[key]);
    // trace(val);
    if (mp1[key] == val) ans++;
  }
  cout << ans << nl;
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