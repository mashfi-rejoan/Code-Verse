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



void solve() 
{
  int n; cin >> n;
  vector<int> v(n), u;
  for (int i = 0; i < n; i++) cin >> v[i];
  int x; cin >> x;
  sort(allr(v));
  int ans = -1, mn = v[n - 1];
  for (int mask = 0; mask < (1 << n); mask++) {
    int temp = x;
    for (int i = 0; i < n; i++) {
      if ((mask >> i) & 1) {
        temp %= v[i];
      }
    }
    temp %= mn;
    ans = max(ans, temp);
  }
  cout << ans << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1;
  // cin >> t;
  while(t--) solve();

  return 0;
}