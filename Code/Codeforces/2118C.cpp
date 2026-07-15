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
  int n, k; cin >> n >> k;
  vector<int> v(n);
  for (auto &u :  v) cin >> u;
  // print(v);
  multiset<pair<int, int>> ms;
  for (auto u : v) {
    int b = __builtin_ffsll(~u) - 1;
    int need = (1 << b);
    ms.insert(make_pair(need, u));
  }
  
  // for (auto x : ms) {
  //   cout << x.first << ' ' << x.second << nl;
  // }

  while (true) {
    int need = ms.begin()->first;
    
    if (k < need) break;
    else {
      k -= need;
      int curr_need = ms.begin()->first;
      int curr_val = ms.begin()->second;
      int new_val = curr_val + curr_need;
      int th = __builtin_ffsll(~new_val) - 1;
      int new_need = (1 << th);
      if (!ms.empty()) ms.erase(ms.begin());
      ms.insert(make_pair(new_need, new_val));
    }
  }

  // cout << string(20, '-') << nl;
  int ans = 0;
  for (auto x : ms) {
    ans += __builtin_popcount(x.second);
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