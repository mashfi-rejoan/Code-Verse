/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ull unsigned long long
#define u128 unsigned __int128
#define int long long int
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n"; 

ull mulmod (ull x, ull y, u128 mod) {
  ull ans = (u128)x * y % mod;
  return ans;
}

ull bigmod(ull x, ull n, u128 mod) {
  x %= mod;
  ull ans = 1 % mod;
  while (n > 0) {
    if (n & 1) ans = mulmod(ans, x, mod);
    x = mulmod(x, x, mod);
    n >>= 1;
  }
  return ans;
}

u128 read(string s) {
  u128 ans = 0;
  for (int i = 0; i < s.size(); i++) {
    ans = (u128)ans * 10 + (s[i] - '0');
  }
  return ans;
}


void solve() 
{
  ull b, p;
  u128 mod;
  string mod_s; cin >> b >> p >> mod_s;
  mod = read(mod_s);
  ull ans = bigmod(b, p, mod);
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