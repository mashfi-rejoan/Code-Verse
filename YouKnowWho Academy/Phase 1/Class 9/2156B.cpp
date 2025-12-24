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
  int n, q; cin >> n >> q;
  string type; cin >> type;
  vector<int> v(n);
  for (int i = 0; i < q; i++) cin >> v[i];
  int ans = 0;
  for (int i = 0; i < q; i++) {
    int k = i % n;
    if (type[k] == 'A') v[i] -= 1;
    else v[i] /= 2;

    ans++;
    if (v[i] == 0) {
      cout << ans << nl;
      return;
    }
  }

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