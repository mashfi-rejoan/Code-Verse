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
  map<char, int> mp;
  for (auto &ch : s) {
    mp[ch]++;
  }
  char mxC, mnC;
  int mx = 0, mn = 15;
  for (auto [ch, cnt] : mp) {
    if (cnt > mx) {
      mx = cnt;
      mxC = ch;
    }
    if (cnt < mn) {
      mn = cnt;
      mnC = ch;
    }
  }
  // trace(mxC); trace(mnC);

  int idx = 0;
  if (mxC == mnC) {
    for (int i = 0; i < n; i++) {
      if (s[i] != mxC) {
        idx = i;
      }
    }
    s[idx] = mxC;
    cout << s << nl;
    return;
  }
  for (int i = 0; i < n; i++) {
    if (s[i] == mnC) {
      idx = i;
    }
  }
  s[idx] = mxC;
  cout << s << nl;
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