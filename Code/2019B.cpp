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
  int n, q; cin >> n >> q;
  vecin(v, n);
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    int asI = lower_bound(all(v), v[i]) - v.begin();
    int asJ = n - (asI + 1);
    int mid = asI * asJ;
    int asWhole = asI + asJ + mid;
    // cout << v[i] << " : " << asWhole << nl;
    mp[asWhole]++;
  }
  // for (auto [key, val] : mp) {
  //   cout << key << ' ' << val << nl;
  // }
  for (int i = 1; i < n; i++) {
    int dif = v[i] - v[i - 1] - 1;
    if (dif) {
      int cnt = i * (n - i);
      mp[cnt] += dif;
    }
  }
  // for (auto [key, val] : mp) {
  //   cout << key << ' ' << val << nl;
  // }
  while (q--) {
    int k; cin >> k;
    cout << mp[k] << ' ';
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