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



int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m, k; cin >> n >> m >> k;
  vector<int> v(m + 1);
  for (int i = 0; i < m + 1; i++) {
    cin >> v[i];
  }
  // print(v);
  int fedor = v[m];
  // cout << fedor << nl;
  int ans = 0;
  for (int i = 0; i < m; i++) {
    int diff = 0;
    for (int j = 0; j < 30; j++) {
      if ((v[i] >> j & 1) != (fedor >> j & 1)) diff++;
    }
    if (diff <= k) ans++;
  }
  cout << ans << nl;

  return 0;
}