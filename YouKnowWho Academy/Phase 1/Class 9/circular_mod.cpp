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

int power(int x, int n, int m) {

  vector<int> v, is_vis(m, false);
  v.push_back(1);
  is_vis[1] = true;
  int cycle_start = 0;
  int cur = 1;
  while (true) {
    cur = cur * x % m;
    if (is_vis[cur]) {
      cycle_start = find(all(v), cur) - v.begin();
      break;
    }
    v.push_back(cur);
    is_vis[cur] = true;
  }
  print(v); cout << nl;
  trace(cycle_start);
  if (n < cycle_start) return v[n];
  int cycle_len = (int)v.size() - cycle_start;
  trace(cycle_len);
  n -= cycle_start;
  int ans = v[(n % cycle_len) + cycle_start];
  return ans;

}

void solve() 
{
  int x = 2, n = 9, m = 40;
  cout << power(x, n, m) << nl;
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