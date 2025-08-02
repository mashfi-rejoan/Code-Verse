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

  int n; cin >> n;
  vector<int> v(n + 1), cnt(30, 0);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
    for (int k = 0; k < 30; k++) {
      if (v[i] >> k & 1) cnt[k]++;
    }
  }
  int sum = 0;
  for (int k = 0; k < 30; k++) {
    int x = cnt[k] * cnt[k];
    sum += (1 << k) * x;
  }
  cout << sum << nl;

  return 0;
}