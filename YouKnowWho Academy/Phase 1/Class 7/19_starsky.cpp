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

const int C = 109, P = 11;
int sky[P][C][C];
int pref[P][C][C];

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, q, c; cin >> n >> q >> c;
  for (int i = 1; i <= n; i++) {
    int x, y, s; cin >> x >> y >> s;
    sky[s][x][y]++;
  }
  
  for (int p = 0; p <= c; p++) {
    for (int i = 1; i <= C; i++) {
      for (int j = 1; j <= C; j++) {
        pref[p][i][j] = pref[p][i - 1][j] + pref[p][i][j - 1] - pref[p][i - 1][j - 1] + sky[p][i][j];
      }
    }
  }

  while (q--) {
    int ans = 0;
    int t, x1, y1, x2, y2; cin >> t >> x1 >> y1 >> x2 >> y2;
    for (int p = 0; p <= c; p++) {
      int br = (p + t) % (c + 1);
      int cnt = pref[p][x2][y2] - pref[p][x1 - 1][y2] - pref[p][x2][y1 - 1] + pref[p][x1 - 1][y1 - 1];
      ans += (cnt * br);
    }
    cout << ans << nl;
  }

  return 0;
}