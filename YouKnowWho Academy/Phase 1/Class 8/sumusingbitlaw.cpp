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
  vector<int> v(n), cnt(30, 0);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    for (int j = 0; j < 30; j++) {
      if ((v[i] >> j) & 1) cnt[j]++;
    }
  }

  int sum = 0;
  for (int j = 0; j < 30; j++) {
    sum += (cnt[j] * (1 << j));
  }
  cout << sum << nl;

  return 0;
}