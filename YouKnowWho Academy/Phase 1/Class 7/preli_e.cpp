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

const int N = 1e5 + 9;
int v[N];

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  // print(v);
  int tom = 0, jerry = 0;
  for(int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      jerry += 1LL * v[i];
    }
    else {
      tom += 1LL * v[i];
    }
  }
  if (tom > jerry) cout << "YES\n";
  else cout << "NO\n";

  return 0;
}