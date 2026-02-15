/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define i128 __int128
#define int long long
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define CEIL(a, b) (((a) + (b) - 1) / (b))
#define print(x) for (auto u : (x)) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n"



void solve() 
{
  int n; cin >> n;
  map<int, int> mp;
  for (int i = 0; i < 2 * n; i++) {
    int x; cin >> x;
    mp[x]++;
  }
  int ans = 0;
  int bias = 0, subbias = 0;
  for (auto [num, cnt] : mp) {
    // cout << "num = " << num << ' ' << cnt << nl;
    if (cnt & 1) {
      ans++;
      subbias++;
    }
    else {
      if (cnt % 4 == 2) ans += 2;
      else {
        ans += 2;
        bias++;
        bias %= 2;
      }
    }
  }
  // trace(bias);
  if (subbias >= 2) bias = 0;
  cout << ans - (2 * bias) << nl;
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