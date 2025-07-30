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

struct  DS
{
  multiset<int> ms;

  void add (int x) {
    ms.insert(x);
  }
  void del (int x) {
    ms.erase(x);
  }
  int getMin () {
    return *ms.begin();
  }
  int getMax () {
    return *ms.rbegin();
  }

};

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k; cin >> n >> k;
  vector<int> v(n + 1), mn, mx;
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  DS ds;
  for (int i = 1; i <= n; i++) {
    ds.add(v[i]);
    if (i >= k) {
      mn.push_back(ds.getMin());
      mx.push_back(ds.getMax());
      ds.del(v[i - k + 1]);
    }
  }

  print(mn); cout << nl;
  print(mx); cout << nl;
  return 0;
}