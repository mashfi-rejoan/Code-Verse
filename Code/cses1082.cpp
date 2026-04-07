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

const int mod = 1e9 + 7;
int bigmod(int x, int n, int mod) {
  x %= mod;
  int ans = 1 % mod;
  while (n > 0) {
    if (n & 1) ans = 1LL * ans * x % mod;
    x = 1LL * x * x % mod;
    n >>= 1;
  }
  return ans;
}

void solve() 
{
  int n; cin >> n;
  int ans = 0;
  int i = 1;
  int inv2 = bigmod(2, mod - 2, mod);
  while (i <= n) {
    int l = i;
    int no_of_muiltiples = n / i;
    int r = n / no_of_muiltiples;
    // trace(r);
    int contrib = (((no_of_muiltiples * (((r - l) % mod + 1) % mod) % mod) * ((l + r) % mod)) % mod) * inv2;
    ans = (ans + contrib) % mod;
    i = r + 1;
  }
  cout << ans << nl;
}

int32_t main()  
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1;
  // cin >> t;
  while(t--) solve();

  return 0;
}