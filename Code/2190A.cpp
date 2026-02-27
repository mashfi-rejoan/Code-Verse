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
  if (is_sorted(all(s))) {
    cout << "Bob\n";
    return;
  }
  int z = count(all(s), '0');
  int o = 0;
  int idx = 0;
  vector<int> ans;
  for (int i = 0; i < n; i++) {
    if (s[i] == '1') {
      o++;
      ans.push_back(i + 1);
    }
    if (s[i] == '0') z--;

    if (o == z) {
      idx = i;
      if (s[idx] == '0') ans.push_back(idx + 1);
      break;
    }
  }
  for (int i = idx + 1; i < n; i++) {
    if (s[i] == '0') ans.push_back(i + 1);
  }
  cout << "Alice\n";
  cout << sz(ans) << nl;
  print(ans);
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