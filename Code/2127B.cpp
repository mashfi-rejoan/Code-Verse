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
  string orgS; cin >> orgS;
  string s = orgS;
  k--;
  int p1 = k + 1;
  int p2 = 1;
  for (int i = k + 1; i < n; i++) {
    if (s[i] == '#') {
      p2 = n - i + 1;
      break;
    }
  }
  int mn1 = min(p1, p2);
  // trace(mn1);
  int q1 = n - (k + 1) + 1;
  int q2 = 1;
  for (int i = k - 1; i >= 0; i--) {
    if (s[i] == '#') {
      q2 = i + 2;
      break;
    }
  }
  int mn2 = min(q1, q2);
  cout << max(mn1, mn2) << nl;
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