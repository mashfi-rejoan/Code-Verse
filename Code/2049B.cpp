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
  string s; cin >> s;
  int ss = 0, pp = 0, si = 0, pi = -1;
  int idx = 0;
  for (auto &ch : s) {
    if (ch == 's') {
      ss++;
      si = idx;
    }
    if (ch == 'p') {
      pp++;
      if (pi == -1) pi = idx;
    }
    idx++;
  }

  if (ss == 0 or pp == 0) yes;
  else if (si == 0 or pi == n - 1) yes;
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