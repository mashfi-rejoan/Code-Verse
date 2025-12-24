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

const int N = 1e6 + 2, mod = 1000003;
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
  if (n < r) return 0;
  int ans = ((fact[n] * ifact[r] % mod) * ifact[n-r]) % mod;
  return ans;
}
int nPr (int n, int r) {
  if (n < r) return 0;
  int ans = fact[n] * ifact[n-r] % mod;
  return ans;
}

void solve() 
{
  int n, r; cin >> n >> r;
  cout << nCr(n, r) << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  pre_calc();

  int t = 1, cs = 0;
  cin >> t;
  while(t--) {
    cout << "Case " << ++cs << ": ";
    solve();
  }

  return 0;
}