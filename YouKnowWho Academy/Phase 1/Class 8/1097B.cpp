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

  int n; cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];

  for (int mask = 0; mask < (1 << n); mask++) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      if ((mask >> i) & 1) {
        cnt += v[i];
      }
      else cnt -= v[i];
    }
    if (cnt == 0 or cnt % 360 == 0) {
      cout << "yes\n";
      return 0;
    }
  }
  cout << "no\n";

  return 0;
}