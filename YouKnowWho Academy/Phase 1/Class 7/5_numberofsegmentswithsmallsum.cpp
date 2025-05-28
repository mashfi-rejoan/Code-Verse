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



int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, s; cin >> n >> s;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  int r = 1, sum = 0, ans = 0;
  for (int l = 1; l <= n; l++) {
    while(r <= n and sum + a[r] <= s) {
      sum += a[r];
      r++;
    }
    ans += (r - l);
    sum -= a[l];
  }
  cout << ans << nl;

  return 0;
}