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
  string s; cin >> s;
  vector<int> v(n + 1), pref(n + 1);
  int cnt_a = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'a') {
      v[i + 1] = 1;
      cnt_a++;
    }
    else v[i + 1] = -1;
  }
  for (int i = 1; i <= n; i++) {
    pref[i] = pref[i - 1] + v[i];
  }
  map<int, int> mp;
  mp[0]++;
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    int x = pref[i] - 1;
    if (mp.find(x) != mp.end()) ans += mp[x];
    mp[pref[i]]++;
  }
  ans -= cnt_a;
  cout << ans << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1;
  // cin >> t;
  while(t--) solve();

  return 0;
}