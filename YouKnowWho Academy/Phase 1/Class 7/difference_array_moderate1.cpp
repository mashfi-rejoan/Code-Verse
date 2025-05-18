/*  
    In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long int
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '

const int N = 1e5;
vector<int> add[N], rmv[N];

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, q; cin >> n >> q;
  while(q--) {
    int l, r, x; cin >> l >> r >> x;
    add[l].push_back(x);
    rmv[r + 1].push_back(x);
  }
  // vector<int> pref;
  map<int, int> mp;
  for(int i = 1; i <= n; i++) {
    for(auto x : add[i]) {
      // pref.push_back(x);
      mp[x]++;
    }
    for(auto x : rmv[i]) {
      // auto it = find(all(pref), x);
      // if(it != pref.end()) pref.erase(it);
      mp[x]--;
      if(mp[x] == 0) mp.erase(x);
    }
    // set<int> se(all(pref));
    cout << mp.size() << nl;
    cout << nl;
  }

  return 0;
}