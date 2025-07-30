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

const int N = 1000 + 9, M = 1000 + 9;
int a[N][M], pref[N][M], d[N][M];

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m; cin >> n >> m;

  vector<string> vs;
  for (int i = 1; i <= n; i++) {
    string s; cin >> s;
    vs.push_back(s);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      a[i + 1][j + 1] = vs[i][j] - '0';
    }
  }

  // for (int i = 1; i <= n; i++) {
  //   for (int j = 1; j <= m; j++) {
  //     cout << a[i][j] << ' ';
  //   }
  //   cout << nl;
  // }

  int q; cin >> q;
  while (q--) {
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    d[x1][y1] ^= 1;
    d[x2 + 1][y1] ^= 1;
    d[x1][y2 + 1] ^= 1;
    d[x2 + 1][y2 + 1] ^= 1;
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      pref[i][j] = pref[i - 1][j] ^ pref[i][j - 1] ^ pref[i - 1][j - 1] ^ d[i][j];
      cout << (pref[i][j] ^ a[i][j]);
    }
    cout << nl;
  }

  return 0;
}