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

const int N = 1.5e6 + 9;

struct DS
{
  set<int> missing;
  map<int, int> mp;

  DS () {
    for (int i = 0; i < N; i++) {
      missing.insert(i);
    }
  }

  void add (int x) {
    mp[x]++;
    if (mp[x] == 1) {
      missing.erase(x);
    }
  }
  void del (int x) {
    mp[x]--;
    if (mp[x] == 0) {
      missing.insert(x);
    }
  }

  int getMex () {
    return *missing.begin();
  }

}ds;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k; cin >> n >> k;
  vector<int> v(n), ans;
  for (auto &u : v) cin >> u;

  for (int i = 0; i < n; i++) {
    ds.add(v[i]);
    if (i >= k - 1) {
      ans.push_back(ds.getMex());
      ds.del(v[i - k + 1]);
    }
  }

  cout << *min_element(all(ans)) << nl;

  return 0;
}