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

  sort(all(v));
  // print(v);
  int x, ans = LLONG_MIN;
  for (x = 1; x <= 100; x++) {
    int cost = x * 30;
    int total_profit = 0;
    for (int i = 0; i < n; i++) {
      int profit = 0, earn = 0;
      if (v[i] <= x) {
        earn = v[i] * 50;
      }
      else {
        earn = x * 50;
      }
      profit = earn - cost;
      total_profit += profit;
    }
    ans = max(ans, total_profit);
  }
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