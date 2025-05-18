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

const int N = 1e5 + 9;
int a[N], L[N], R[N], X[N], D[N], op[N], ans[N];

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m, k; cin >> n >> m >> k;
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  for(int i = 1; i <= n; i++) {
    D[i] = a[i] - a[i - 1];
  }
  for(int i = 1; i <= m; i++) {
    cin >> L[i] >> R[i] >> X[i];
  }
  while(k--) {
    int u, d; cin >> u >> d;
    op[u]++;
    op[d + 1]--;
  }
  for(int i = 1; i <= m; i++) {
    op[i] += op[i - 1];
  }
  for(int i = 1; i <= m; i++) {
    D[L[i]] += (X[i] * op[i]);
    D[R[i] + 1] -= (X[i] * op[i]);
  }
  for(int i = 1; i <= n; i++) {
    ans[i] = ans[i - 1] + D[i];
    cout << ans[i] << ' ';
  }
  cout << nl;

  return 0;
}