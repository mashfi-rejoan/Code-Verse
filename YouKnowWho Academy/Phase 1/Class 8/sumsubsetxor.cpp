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

const int mod = 1e9 + 7;

int power(int x, int y) {
  int result = 1;
  while (y > 0) {
    if (y & 1) {         
      result = (result % mod * x % mod) % mod;
    }
    x = (x % mod * x % mod) % mod;              
    y >>= 1;             
  }
  return result;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  vector<int> v(n + 1), cnt(30, 0);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
    for (int k = 0; k < 30; k++) {
      if (v[i] >> k & 1) cnt[k]++;
    }
  }
  int sum = 0;
  for (int k = 0; k < 30; k++) {
    if (cnt[k] == 0) continue;
    int x = power(2, n - 1);
    sum += 1LL * (1 << k) % mod;
    sum = (1LL * sum % mod * x % mod) % mod;
  }
  cout << sum << nl;

  return 0;
}