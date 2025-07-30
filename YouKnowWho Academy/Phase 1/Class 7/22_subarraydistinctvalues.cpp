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

struct DS
{
  map<int, int> mp;
  void add(int x) {
    mp[x]++;
  }
  void del(int x) {
    mp[x]--;
    if (mp[x] == 0) mp.erase(x);
  }
  int distinct_count() {
    return mp.size();
  }

  
}ds;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k; cin >> n >> k;
  vector<int> v(n);
  for (auto &u : v) cin >> u;

  int l = 0, ans = 0;
  for (int r = 0; r < n; r++) {
    ds.add(v[r]);
    while(l <= r and ds.distinct_count() > k) {
      ds.del(v[l]);
      l++;
    }
    ans += r - l + 1;
  }
  cout << ans << nl;
  
  return 0;
}