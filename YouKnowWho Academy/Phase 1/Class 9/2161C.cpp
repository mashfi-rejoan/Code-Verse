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
  int n, x; cin >> n >> x;
  vector<int> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];
  sort(allr(v));
  int sum = 0, cur = 0, ans = 0;
  for (int i = 0; i < n; i++) {
    sum += v[i];
    if (sum / x > cur) {
      ans += v[i];
      cur = sum / x;
    }
  }
  cout << ans << nl;
  print(v); cout << nl;

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