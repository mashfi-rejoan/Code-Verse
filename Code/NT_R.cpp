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
  int n; cin >> n;
  vecin(v, n);
  for (int i = n - 2; i >= 0; i--) {
    if (v[i] > v[i + 1]) {
      // trace(v[i]); trace(v[i - 1]);
      int val = v[i];
      int idj = -1;
      for (int j = i - 1; j >= 0; j--) {
        val = __gcd(val, v[j]);
        if (val <= v[i + 1]) {
          idj = j;
          break;
        }
      }
      if (idj == -1) {
        no;
        return;
      }
      for (int k = idj; k < i; k++) {
        v[k + 1] = __gcd(v[k + 1], v[k]);
      }
    }
  }
  // print(v);
  if (is_sorted(all(v))) yes;
  else no;

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