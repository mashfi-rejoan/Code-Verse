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

const int N = 1e5 + 9;
int a[N];
struct DS
{
  multiset<int> ms;

  DS() {}

  void add(int item) {
    ms.insert(item);
  }
  void del(int item) {
    ms.erase(ms.find(item));
  }
  int get_diff() {
    int mx = *(--ms.end());
    int mn = *ms.begin();
    return mx - mn;
  }
}ds;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k; cin >> n >> k;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  int r = 1, ans = 0;
  for (int l = 1; l <= n; l++) {
    while (r <= n) {
      ds.add(a[r]);
      if(ds.get_diff() > k) {
        ds.del(a[r]);
        break;
      }
      r++;
    }
    ans += (r - l);
    ds.del(a[l]);
  }
  cout << ans << nl;

  return 0;
}