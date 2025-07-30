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



int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, x; cin >> n >> x;
  vector<pair<int, int>> vp;
  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    vp.push_back(make_pair(a, i + 1));
  }
  sort(all(vp));
  // for (auto [p, q] : vp) {
  //   cout << p << ' ' << q << nl;
  // }

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int l = j + 1, r = n - 1;
      while (l < r) {
        int sum = vp[i].first + vp[j].first + vp[l].first + vp[r].first;
        if (sum == x) {
          cout << vp[i].second << ' ' << vp[j].second << ' ' << vp[l].second << ' ' << vp[r].second << nl;
          return 0;
        }

        if (sum < x) l++;
        else r--;
      }
    }
  }
  cout << "IMPOSSIBLE\n";

  return 0;
}