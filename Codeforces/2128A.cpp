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
#define trace(x) cout << #x << ": " << x << " \n"; 



void solve() 
{
  int n, c; cin >> n >> c;
  multiset<int> ms;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    ms.insert(x);
  }
  for (int k = 1; k <= n; k++) {
    auto up = ms.upper_bound(c);
    if (up != ms.begin()) {
      up--;
      if (*up <= c) {
        ms.erase(ms.find(*up));
      }
    }
    vector<int> notun_notun;
    for (auto u : ms) {
      int ekbare_notun = 1LL * u * 2;
      notun_notun.push_back(ekbare_notun);
    }
    ms.clear();
    for (auto u : notun_notun) {
      ms.insert(u);
    }
  }
  cout << (int)ms.size() << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}