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
  map<int, int> mp;
  DS() {}
  void add(int item) {
    mp[item]++;
  }
  void del(int item) {
    mp[item]--;
    if (mp[item] <= 0) mp.erase(item);
  }
  int get_uniqueCount() {
    return mp.size();
  }
  void dsprint() {
    for (auto [x, y] : mp) {
      cout << x << ' ' << y << ' ';
    }
    cout << nl;
  }
}ds;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k; cin >> n >> k;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  for (int i = 1; i <= n; i++) {
    ds.add(a[i]);
    if (i >= k) {
      cout << ds.get_uniqueCount() << ' ';
      // ds.dsprint();
      ds.del(a[i - k + 1]);
    }
  }

  return 0;
}