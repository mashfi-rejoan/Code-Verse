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
  string s; cin >> s;
  if (n <= 2) {
    cout << 1 << nl;
    return;
  }

  int ans = count(all(s), '1');
  if (s[0] == '0' and s[1] == '0') {
    s[1] = '1';
    ans++;
  }
  if (s[n - 1] == '0' and s[n - 2] == '0') {
    s[n - 2] = '1';
    ans++;
  }
  // trace(s);
  for (int l = 0; l < n; l++) {
    if (s[l] == '1') {
      int r = l + 1;
      while (s[r] == '0') {
        r++;
      }
      int zero = (r - l) - 1;
      // trace(zero);
      ans += (zero / 3);
      l = r - 1;
    }
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