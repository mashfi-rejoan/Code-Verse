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
int a[N][N], prefix[N][N], d[N][N];

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m; cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> a[i][j];
    }
  }
  int q; cin >> q;
  while (q--) {
    int x1, y1, x2, y2, k; cin >> x1 >> y1 >> x2 >> y2 >> k;
    d[x1][y1] += k;
    d[x1][y2 + 1] -= k;
    d[x2 + 1][y1] -= k;
    d[x2 + 1][y2 + 1] += k; 
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + d[i][j];
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      a[i][j] += prefix[i][j];
      cout << a[i][j] << ' ';
    }
    cout << nl;
  }

  return 0;
}