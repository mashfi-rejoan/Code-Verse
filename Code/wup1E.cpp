/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define i128 __int128
#define int long long
#define sz(x) ((int)(x).size())
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define CEIL(a, b) (((a) + (b) - 1) / (b))
#define trace(x) cout << #x << ": " << x << " \n"
#define print(x) for (auto u : (x)) cout << u << ' '; cout << nl;
#define vecin(name, len) vector<int> name(len); for (auto &_ : name) cin >> _;



void solve() 
{
  int n; cin >> n;
  priority_queue<pair<int, int>> pq;
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    int x; cin >> x;
    if (x == 0) continue;
    pq.push({x, i});
    sum += x;
  }

  if (sum & 1) {
    cout << "IMPOSSIBLE\n";
    return;
  }

  int cnt = 0;
  vector<pair<int,int>> ans;

  while (!pq.empty()) {
    auto [d, i] = pq.top();
    // cout << "d = " << d << " | i = " << i << nl;
    pq.pop();

    vector<pair<int, int>> temp;

    if (d > sz(pq)) {
      cout << "IMPOSSIBLE\n";
      return;
    }

    while (d--) {
      auto [dd, ii] = pq.top();
      // cout << i << ' ' << ii << nl;
      cnt++;
      ans.push_back({i, ii});
      temp.push_back({dd - 1, ii});
      pq.pop();
    }
    for (auto [dd, ii] : temp) {
      if (dd > 0) pq.push({dd, ii});
    }
  }

  cout << cnt << nl;
  for (auto [i, ii] : ans) {
    cout << i << ' ' << ii << nl;
  }
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