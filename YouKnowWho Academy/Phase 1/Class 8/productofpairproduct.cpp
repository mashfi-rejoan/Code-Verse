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

const int N = 1e6 + 9, MOD = 1e9 + 7;
int a[N];

int power(int x, int y) {
  int result = 1;
  while (y > 0) {
    if (y & 1) {         
      result = ((result % MOD) * (x % MOD)) % MOD;
    }
    x = ((x % MOD) * (x % MOD)) % MOD;
    y >>= 1;             
  }
  return result;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  for (int i = 1; i <= n; i++) cin >> a[i];
  int ans = 1;
  for (int i = 1; i <= n; i++) {
    ans = 1LL * ((ans % MOD) * (power(a[i], (2 * n)) % MOD)) % MOD;
  }
  cout << ans << nl;

  return 0;
}