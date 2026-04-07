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
  vecin(v, n);
  map<int, int> freq, mp;
  for (int i = 0; i < n; i++) {
    freq[v[i]]++;
  }
  for (int i = 0; i < n; i++) {
    if (freq[v[i]] % k != 0) {
      cout << 0 << nl;
      return;
    }
  }

  int r = 0, ans = 0;
  for (int l = 0; l < n; l++) {
    while (r < n and mp[v[r]] < freq[v[r]] / k) {
      mp[v[r]]++;
      r++;
    }
    ans += (r - l);
    mp[v[l]]--;
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