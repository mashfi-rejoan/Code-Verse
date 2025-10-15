/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long int
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n";


int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  vector<int> l(n), r(n);

  for (int i = 0; i < n; i++) {
    cin >> l[i] >> r[i];
  }
  sort(all(l));
  sort(all(r));
  int i = 0, j = 0;
  int ans = 0;
  int cur = 0;
  while (i < n and j < n) {
    if (l[i] < r[j]) {
      cur++;
      ans = max(ans, cur);
      i++;
    }
    else {
      cur--;
      j++;
    }
  }
  cout << ans << nl;


  return 0;
}