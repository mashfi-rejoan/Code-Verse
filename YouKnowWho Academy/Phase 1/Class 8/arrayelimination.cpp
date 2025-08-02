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



void solve() 
{
  int n; cin >> n;
  vector<int> v(n), cnt(30, 0);
  for (auto &u : v) cin >> u;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 30; j++) {
      if ((v[i] >> j) & 1) {
        cnt[j]++;
      }
    }
  }

  for (int k = 1; k <= n; k++) {
    bool flag = true;
    for (int j = 0; j < 30; j++) {
      if (cnt[j] % k != 0) {
        flag = false;
        break;
      }
    }
    if (flag) cout << k << " ";
  }
  cout << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}