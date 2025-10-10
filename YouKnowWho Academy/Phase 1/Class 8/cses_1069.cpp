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

  string s; cin >> s;
  int j = 0;
  int ans = 0, cnt = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == s[j]) {
      cnt++;
      continue;
    }
    // trace(cnt);
    ans = max(cnt, ans);
    cnt = 0;
    j = i;
    cnt++;
  }
  ans = max(ans, cnt);
  cout << ans << nl;

  return 0;
}