/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long int
#define ull unsigned long long
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n"; 
#define CEIL(a, b) (((a) + (b) - 1) / (b))

ull mulmod(ull x, ull n, ull mod) {
  x %= mod;
  ull ans = 0;
  while (n > 0) {
    if (n & 1) ans = (ans + x) % mod;
    x = (x + x) % mod;
    n >>= 1;
  }
  return ans;
}

ull power(ull x, ull n, ull mod) {
  x %= mod;
  ull ans = 1 % mod;
  while (n > 0) {
    if (n & 1) ans = mulmod(ans, x, mod);
    x = mulmod(x, x, mod);
    n >>= 1;
  }
  return ans;
}

void solve() 
{
  ull b, m;
  ull p;
  while (cin >> b >> p >> m) {
    cout << power(b, p, m) << nl;
  }
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