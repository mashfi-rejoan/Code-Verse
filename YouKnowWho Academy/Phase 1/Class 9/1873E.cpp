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

int n, x;
const int N = 2e5 + 9;
vector<int> v(N);

bool is_ok (int h) {
  int unit = 0;
  for (int i = 1; i <= n; i++) {
    if (v[i] >= h) continue;
    unit += (abs(h - v[i]));
  }
  return unit <= x;
}

void solve() 
{
  cin >> n >> x;
  for (int i = 1; i <= n; i++) cin >> v[i];
  int l = 1, r = 2e9, ans = -1;
  while (l <= r) {
    int mid = (l + r) / 2;
    if (is_ok(mid)) {
      ans = mid;
      l = mid + 1;
    }
    else {
      r = mid - 1;
    }
  }
  cout << ans << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1;
  cin >> t;
  while(t--) solve();

  return 0;
}