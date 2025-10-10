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
  int n, m; cin >> n >> m;
  vector<int> v(m);
  for (int i = 0; i < m; i++) {
    cin >> v[i];
  }
  // print(v); cout << nl;

  bool flag = true;
  for (int i = 0; i < m - 1; i++) {
    if (v[i + 1] != v[i] + 1) {
      flag = false;
      break;
    }
  }
  // trace(flag);
  if (!flag) {
    cout << 1 << nl;
    return;
  }
  int mx = *max_element(all(v));
  int ans = n - (mx - 1);
  cout << ans << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}