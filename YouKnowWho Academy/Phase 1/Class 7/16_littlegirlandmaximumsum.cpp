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

vector<int> L, R;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, q; cin >> n >> q;
  int query = q;
  vector<int> v(n + 2), d(n + 2, 0);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  sort(all(v)); 
  // print(v); cout << nl;
  int p = 1;
  while(q--) {
    int l, r; cin >> l >> r;
    L.push_back(l); R.push_back(r);
    d[l]++, d[r + 1]--;
  }
  for (int i = 1; i <= n; i++) {
    d[i] += d[i - 1];
  }
  // print(d); cout << nl;
  vector<pair<int,int>> vp;
  for (int i = 1; i <= n; i++) {
    vp.push_back(make_pair(d[i], i));
  }
  sort(allr(vp));
  vector<int> ans(n + 2);
  // for (auto u : vp) {
  //   cout << u.first << ' ' << u.second << nl;
  // }
  for (int i = 0; i < vp.size(); i++) {
    ans[vp[i].second] = v.back();
    v.pop_back();
  }
  // print(ans); cout << nl;
  vector<int> prefix(n + 2);
  for (int i = 1; i <= n; i++) {
    prefix[i] = prefix[i - 1] + ans[i];
  }
  // print(prefix);
  int sum = 0;
  int i = 0;
  while(query--) {
    int l = L[i], r = R[i]; i++;
    sum += (prefix[r] - prefix[l - 1]);
  }
  cout << sum << nl;
  
  return 0;
}