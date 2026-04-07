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

int k;
bool is_ok (int x) {
  int n = x - (int)sqrtl(x);
  return n >= k;
}

void solve() 
{
  cin >> k;
  int l = 1, r = 2e18, ans = -1;
  while (l <= r) {
    int mid = (l + r) / 2;
    // trace(mid);
    if (is_ok(mid)) {
      r = mid - 1;
      ans = mid;
    }
    else {
      l = mid + 1;
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