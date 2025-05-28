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
  int get_maxel() {
    return *(--ms.end());
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
      cout << ds.get_maxel() << ' ';
      ds.del(a[i - k + 1]);
    }
  }

  return 0;
}