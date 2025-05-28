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

struct DS
{
  multiset<int> ms;
  void add(int x) {
    ms.insert(x);
  }
  void del(int x) {
    ms.erase(ms.find(x));
  }
  int min_element() {
    return *(ms.begin());
  }
  
}ds;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k; cin >> n >> k;
  int x, a, b, c; cin >> x >> a >> b >> c;
  vector<int> v(n), cs;
  deque<int> dq;
  v[0] = x;
  for (int i = 1; i < n; i++) {
    v[i] = (a * v[i - 1] + b) % c;
  }
  // print(v); cout << nl;

  for (int i = 0; i < n; i++) {
    while (!dq.empty() and v[dq.back()] >= v[i]) {
      dq.pop_back();
    }
    dq.push_back(i);
    if (dq.front() <= i - k) dq.pop_front();
    if (i >= k - 1) cs.push_back(v[dq.front()]);
  }
  
  // print(cs);
  int ans = 0;
  for (int i = 0; i < (int)cs.size(); i++) {
    ans ^= cs[i];
  }
  cout << ans << nl;

  return 0;
}