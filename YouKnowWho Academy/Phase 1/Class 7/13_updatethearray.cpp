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
  int n, u; cin >> n >> u;
  vector<int> a(n + 5, 0), pref(n + 5);
  while(u--) {
    int l, r, x; cin >> l >> r >> x;
    l++; r++;
    a[l] += x;
    a[r + 1] -= x;
  }
  for (int i = 1; i <= n; i++) {
    pref[i] = pref[i - 1] + a[i];
  }
  int q; cin >> q;
  while(q--) {
    int idx; cin >> idx;
    idx++;
    cout << pref[idx] << nl;
  }
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}