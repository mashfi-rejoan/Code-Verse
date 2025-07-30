/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long int
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n";

const int N = 1e6 + 9, mod = 1e9 + 7;
int a[N];

int F(int n) {
  return (1LL * n * (n + 1) / 2) % mod;
}

int range_sum(int l, int r) {
  return (F(r) - F(l - 1) + mod) % mod;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  int ans = 0;
  for (int i = 1; i <= n; i++) {
    int contribution = (1LL * range_sum(i, n) * i % mod - 1LL * range_sum(1, i) * (n - i + 1) % mod + mod) % mod;
    contribution = (contribution % mod + (n - i + 1) * i % mod) % mod;
    ans = (ans % mod + a[i] * contribution % mod) % mod;
  }
  cout << ans << nl;

  return 0;
}