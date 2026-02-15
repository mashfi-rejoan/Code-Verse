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
  int n, k; cin >> n >> k;
  vecin(v, n);

  if (n == k) {
    int cur = 1;
    for (int i = 1; i < n; i += 2) {
      if (v[i] == cur) {
        cur++;
        continue;
      }
      else {
        cout << cur << nl;
        return;
      }
    }
    cout << v[n - 1] + 1 << nl;
    return;
  }

  for (int i = 1; i <= (n - k) + 1; i++) {
    if (v[i] != 1) {
      cout << 1 << nl;
      return;
    }
  }
  
  cout << 2 << nl;
  
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