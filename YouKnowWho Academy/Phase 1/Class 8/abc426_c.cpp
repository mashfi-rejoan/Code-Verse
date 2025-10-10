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

  int n, q; cin >> n >> q;
  vector<int> a(n + 1, 1);
  int cur = 0;
  while (q--) {
    int x, y; cin >> x >> y;
    int sum = 0;
    for (int i = cur + 1; i <= x; i++) {
      sum += a[i];
    }
    a[y] += sum;
    cout << sum << nl;
    if (x > cur) cur = x;
  }

  return 0;
}