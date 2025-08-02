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



void solve() 
{
  int n; cin >> n;
  vector<int> v(n + 3);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  if (is_sorted(all(v))) {
    cout << 0 << nl;
    return;
  }
  int cnt = 0;
  
  for (int l = 1; l <= n; l++) {
    if (v[l] == 1) {
      int r = l;
      while (r <= n and v[r] == 1) {
        r++;
      }
      cnt++;
      l = r - 1;
    }
  }
  // trace(cnt);
  if (v[n] == 1) cout << cnt - 1 << nl;
  else cout << cnt << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}