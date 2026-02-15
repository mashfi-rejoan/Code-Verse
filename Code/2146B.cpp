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
#define print(x) for (auto u : (x)) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n" 



void solve() 
{
  int n, m; cin >> n >> m;
  vector<set<int>> vst;
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    int sz; cin >> sz;
    set<int> st;
    while (sz--) {
      int x; cin >> x;
      st.insert(x);
      mp[x]++;
    }
    vst.push_back(st);
  }
  int cnt = 0;
  auto org_mp = mp;
  for (int i = 0; i < n; i++) {
    auto st = vst[i];
    for (auto& u :  st) {
      mp[u]--;
      if (mp[u] <= 0) {
        mp.erase(u);
      }
    }
    if (sz(mp) >= m) cnt++;
    for (auto& u :  st) {
      mp[u]++;
    }
  }
  if (cnt >= 2) yes;
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