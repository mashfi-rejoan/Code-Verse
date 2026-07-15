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
  vector<int> v(n);
  for (auto &u : v) cin >> u;

  int mn = v[0], ans = v[0], min_ans = 1e18;
  // cout << ans << "=> ";
  for (int i = 1; i < n; i++) {
    ans += (min(mn, v[i]));
    min_ans = min(ans, min_ans);
    // cout << ans << ' ';
  }
  cout << min_ans;
  cout << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}