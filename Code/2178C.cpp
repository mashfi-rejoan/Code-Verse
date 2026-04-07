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
  vector<int> v(n + 1), pref(n + 1), modPref(n + 1);
  for (int i = 1; i <= n; i++) cin >> v[i];
  
  for (int i = 1; i <= n; i++) {
    pref[i] = pref[i - 1] + v[i];
  }
  // print(pref);

  auto modV = v;
  for (int i = 2; i <= n; i++) modV[i] = abs(modV[i]);
  for (int i = 1; i <= n; i++) {
    modPref[i] = modPref[i - 1] + modV[i];
  }

  // print(modPref);

  int ans = -(pref[n] - pref[1]);
  for (int i = 2; i <= n; i++) {
    int right = pref[n] - pref[i];
    int left = modPref[i - 1] - v[1];
    left += v[1];
    int cur = left - right;
    // trace(i); trace(left); trace(right); trace(cur);
    ans = max(ans, cur);
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