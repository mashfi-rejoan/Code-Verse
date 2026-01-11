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
  vector<int> v(n + 1), pref(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  for (int i = 1; i <= n; i++) {
    pref[i] = pref[i - 1] + v[i];
  }
  // print(pref); cout << nl;
  int s1, s2, s3;
  for (int l = 1; l <= n - 2; l++) {
    s1 = pref[l]; 
    s1 %= 3;
    for (int r = l + 1; r <= n - 1; r++) {
      s2 = pref[r] - pref[l];
      s2 %= 3;
      s3 = pref[n] - pref[r];
      s3 %= 3;
      if ((s1 == s2 and s2 == s3) or (s1 != s2 and s2 != s3 and s1 != s3)) {
        // cout << s1 << ' ' << s2 << ' ' << s3 << nl;
        cout << l << ' ' << r << nl;
        return;
      }
    }
  }
  cout << 0 << ' ' << 0 << nl;

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