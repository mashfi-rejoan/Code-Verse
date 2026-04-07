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
  if (n == 1) {
    cout << 1 << nl << 1 << nl;
  }
  else if (k == 1 or k == n) {
    cout << -1 << nl;
  }
  else if (!(k & 1)){
    cout << 3 << nl;
    cout << 1 << ' ' << k << ' ' << k + 1 << nl;
  }
  else {
    cout << 3 << nl;
    cout << 1 << ' ' << k - 1 << ' ' << k + 2 << nl;
  }

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