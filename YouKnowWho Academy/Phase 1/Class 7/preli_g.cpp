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

  int n, k; cin >> n >> k;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }

  vector<int> d;
  for (int i = 0; i < n; i++) {
    d.push_back(b[i] - a[i]);
  }
  // print(d); cout << nl;
  sort(allr(d));
  // print(d); cout << nl;

  int ans = 0;
  for (int i = 0; i < k; i++) {
    ans += 1LL * d[i];
  }
  cout << ans << nl;

  return 0;
}