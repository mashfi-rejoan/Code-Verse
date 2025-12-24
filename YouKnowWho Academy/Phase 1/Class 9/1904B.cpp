/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long int
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n"; 



void solve() 
{
  int n; cin >> n;
  vector<int> a(n + 1), pref(n + 1);
  for (int i = 1; i <= n; i++) cin >> a[i];
  auto v = a;
  sort(a.begin() + 1, a.end());
  for (int i = 1; i <= n; i++) {
    pref[i] = pref[i - 1] + a[i];
  }
  map<int, int> mp;
  for (int i = n; i >= 1; i--) {
    int prefix_sum = pref[i];
    int cur = (upper_bound(a.begin() + 1, a.end(), prefix_sum) - a.begin()) - 1;
    if (cur == i) mp[a[i]] = i - 1;
    else mp[a[i]] = mp[a[cur]];
  }
  for (int i = 1; i <= n; i++) {
    cout << mp[v[i]] << ' ';
  }
  cout << nl;

}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1;
  cin >> t;
  while(t--) solve();

  return 0;
}