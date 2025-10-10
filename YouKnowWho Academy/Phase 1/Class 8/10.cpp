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
  for (auto& u : v) cin >> u;
  for (int i = 0; i <= 256; i++) {
    int ans = 0;
    for (int j = 0; j < n; j++) {
      ans = (ans ^ i ^ v[j]);
      // trace(ans); trace(i);
    }
    if (ans == 0) {
      cout << i << nl;
      return;
    }
  }
  cout << -1 << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}