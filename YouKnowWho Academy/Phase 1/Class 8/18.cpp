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

const int mod = 1e9 + 7;

void solve() 
{
  int n, m; cin >> n >> m;
  int total_or = 0;
  for (int i = 1; i <= m; i++) {
    int l, r, x; cin >> l >> r >> x;
    total_or |= x;
  }
  int ans = 1;
  for (int i = 1; i < n; i++) {
    ans = (ans * 2) % mod;
  }
  ans = (1LL * ans * total_or) % mod;
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