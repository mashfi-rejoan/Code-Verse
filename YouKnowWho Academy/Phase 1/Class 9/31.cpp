/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long int
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n"; 

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

int mash(int a, int x, int m) {
  if (x == 0) return 1 % m;
  if (x & 1) {
    int p = x / 2;
    int cur = mash(a, p, m);
    int ans = (cur + (bigmod(a, p + 1, m) * cur) % m) % m;
    return ans;
  }
  else {
    int ans = (mash(a, x - 1, m) + bigmod(a, x, m)) % m;
    return ans;
  }
}

void solve() 
{
  int a, x, m; cin >> a >> x >> m;
  cout << mash(a, x - 1, m) << nl;
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