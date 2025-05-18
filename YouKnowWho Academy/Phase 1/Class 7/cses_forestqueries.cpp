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

const int N = 1e3 + 9;
int a[N][N], prefix[N][N];

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, q; cin >> n >> q;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      char ch; cin >> ch;
      if(ch == '*') a[i][j] = 1;
      else a[i][j] = 0;
    }
  }
  // for (int i = 1; i <= n; i++) {
  //   for (int j = 1; j <= n; j++) {
  //     cout << a[i][j] << ' ';
  //   }
  //   cout << nl;
  // }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + a[i][j];
      // cout << prefix[i][j] << ' ';
    }
    // cout << nl;
  }
  while(q--) {
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    // cout << x2 << ' ' << y2 << nl;
    int ans = prefix[x2][y2] - prefix[x1 - 1][y2] - prefix[x2][y1 - 1] + prefix[x1 - 1][y1 - 1];
    // cout << prefix[x2][y2] << nl << prefix[x1 - 1][y2] << nl << prefix[x2][y1 - 1] << nl << prefix[x1 - 1][y1 - 1] << nl;
    cout << ans << nl;
  }

  return 0;
}