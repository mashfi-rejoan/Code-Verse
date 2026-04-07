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
  int n, m; cin >> n >> m;
  set<int> st1, st2, cmn;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    st1.insert(x);
  }
  for (int i = 0; i < m; i++) {
    int x; cin >> x;
    st2.insert(x);
  }

  if (n > m) {
    for (auto &u : st1) {
      if (st2.find(u) != st2.end()) {
        cmn.insert(u);
        st2.erase(u);
      }
    }
  }
  else {
    for (auto &u : st2) {
      if (st1.find(u) != st1.end()) {
        cmn.insert(u);
        st1.erase(u);
      }
    }
  }

  for (auto &u : cmn) {
    if (st2.find(u) != st2.end()) {
      st2.erase(u);
    }
    if (st1.find(u) != st1.end()) {
      st1.erase(u);
    }
  }
  int cnt = 0;
  int i = 1;
  while (!st1.empty() and !st2.empty()) {
    if (i & 1) st1.erase(st1.begin());
    else st2.erase(st2.begin());
    cnt++;
    i++;
  } 
  if ((i & 1 and !st1.empty()) or (!(i & 1) and !st2.empty())) cnt++; 
  cout << cnt + 1 << nl;

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