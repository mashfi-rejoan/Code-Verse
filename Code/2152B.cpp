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
#define print(x) for (auto u : (x)) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n" 



void solve() 
{
  int n, x1, y1, x2, y2; cin >> n >> x1 >> y1 >> x2 >> y2;

  int dx = abs(x1 - x2);
  int dy = abs(y1 - y2);

  int dxx = 0;
  if (x2 > x1) dxx = x1;
  if (x2 < x1) dxx = n - x1;

  int dyy = 0;
  if (y2 > y1) dyy = y1;
  if (y2 < y1) dyy = n - y1;

  int ans = max(dx + dxx, dy + dyy);
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