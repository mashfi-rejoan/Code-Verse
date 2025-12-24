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
  int n, q; cin >> n >> q;
  vector<int> a(n + 2), b(n + 2);
  for (int i = 1; i <= n; i++) cin >> a[i];
  for (int i = 1; i <= n; i++) cin >> b[i];
  int cur_mx = -1;
  for (int i = 1; i <= n; i++) {
    cur_mx = max(b[i], cur_mx);
    b[i] = cur_mx;
  }
  int ans = 0, sum = 0;
  for (int i = 1; i <= min(n, q); i++) {
    sum += a[i];
    int k = (q - i) * b[i];
    ans = max(ans, sum + k);
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