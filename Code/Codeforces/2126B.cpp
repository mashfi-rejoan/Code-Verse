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
  int n, k; cin >> n >> k;
  vector<int> v(n);
  for (auto &u : v) cin >> u;

  int cntZero = 0, ans = 0;
  for (int i = 0; i < n; i++) {
    if (v[i] == 0) cntZero++;
    else {
      cntZero = 0;
    }

    if (cntZero == k) {
      ans++;
      i++;
      cntZero = 0;
    }
  }
  cout << ans << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}