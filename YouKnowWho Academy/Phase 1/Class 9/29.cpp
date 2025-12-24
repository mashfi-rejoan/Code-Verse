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
  vector<int> v(n);
  priority_queue<pair<int,int>> pq;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    pq.push({v[i], i});
  }
  int q; cin >> q;
  while (q--) {
    int m; cin >> m;
    while (!pq.empty()) {
      auto [x, i] = pq.top();
      if (x < m) break;
      pq.pop();
      pq.push({x % m, i});
    }
  }
  while (!pq.empty()) { 
    auto [x, i] = pq.top();
    pq.pop();
    v[i] = x;
  } 
  for (int i = 0; i < n; i++) {
    cout << v[i] << (i < n - 1 ? ' ' : '\n');
  }
}

int32_t main() 
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1, cs = 1;
  cin >> t;
  while(t--) {
    cout << "Case " << cs << ":\n";
    solve();
    cs++;
  }

  return 0;
}