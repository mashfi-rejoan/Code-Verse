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
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  sort(all(v));
  // print(v); cout << nl;
  int con = 1, ans = 1;
  for (int i = 0; i < n - 1; i++) {
    // trace(v[i]);
    // trace(v[i + 1]);
    if (v[i] == v[i + 1]) continue;
    if (v[i + 1] - v[i] == 1) {
      con++;
    }
    else {
      con = 1;
    }
    ans = max(ans, con);
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