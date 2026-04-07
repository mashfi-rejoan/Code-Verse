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

// factorial and inverse factorial precalculation upto 1e6
const int N = 5e6 + 9, mod = 1e9 + 7;
int fact[N], ifact[N];
int bigmod(int x, int n) {
  x %= mod;
  int ans = 1 % mod;
  while (n > 0) {
    if (n & 1) ans = 1LL * ans * x % mod;
    x = 1LL * x * x % mod;
    n >>= 1;
  }
  return ans;
}
int inverse (int a) {
  return bigmod(a, mod - 2);
}
void pre_calc() {
  fact[0] = 1;
  for (int i = 1; i < N; i++) {
    fact[i] = fact[i - 1] * i % mod;
  }
  ifact[N - 1] = inverse(fact[N - 1]);
  for (int i = N - 2; i >= 0; i--) {
    // ifact[i] = inverse(fact[i]);
    ifact[i] = ifact[i + 1] * (i + 1) % mod;
  }
}

int nCr (int n, int r) {
  if (n < 0 or n < r) return 0;
  else return (((fact[n] * ifact[r]) % mod) * ifact[n - r]) % mod;
}

void solve() 
{
  int n, m; cin >> n >> m;
  cout << nCr(m + n - 1, n - 1) << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  pre_calc();
  int t = 1;
  // cin >> t;
  while(t--) solve();

  return 0;
}